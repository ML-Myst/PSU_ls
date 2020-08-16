/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** recode the LS shell command
*/
#include "my_ls.h"

void lsa(DIR *directory)
{
    struct dirent *dir;

    while ((dir = readdir(directory)) != NULL)
        if (dir->d_type == 0x8) {
            my_printf("\033[0;32m");
            my_printf("%s  ", dir->d_name);
            my_printf("\033[0m");
        } else {
            my_printf("\033[0;34m");
            my_printf("%s  ", dir->d_name);
            my_printf("\033[0m");
        }
    my_printf("\n");
}

void basic_ls(DIR *directory)
{
    struct dirent *dir;

    while ((dir = readdir(directory)) != NULL)
        if (dir->d_name[0] != '.' && dir->d_type == 0x8) {
            my_printf("\033[0;32m");
            my_printf("%s  ", dir->d_name);
            my_printf("\033[0m");
        } else if (dir->d_name[0] != '.') {
            my_printf("\033[0;34m");
            my_printf("%s  ", dir->d_name);
            my_printf("\033[0m");
        }
    my_printf("\n");
}

int main(int ac, char **av)
{
    if (ac == 1) {
        basic_ls(opendir("."));
        return 0;
    }
    if (ac == 2 && av[1][1] == 'a')
        lsa(opendir("."));
    if (ac == 2 && av[1][1] == 'h')
        my_printf("%s\n", HELP);
    return 0;
}