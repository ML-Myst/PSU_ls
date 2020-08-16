/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** recode the LS shell command
*/
#include "my_ls.h"

int check_open(DIR *directory)
{
    if (directory == NULL) {
        my_printf("Unable to open directory.\n");
        return 84;
    }
    return 0;
}

void lsa(DIR *directory)
{
    struct dirent *dir;

    while ((dir = readdir(directory)) != NULL)
        my_printf("%s  ", dir->d_name);
    my_printf("\n");
}

void basic_ls(DIR *directory)
{
    struct dirent *dir;

    while ((dir = readdir(directory)) != NULL)
        if (dir->d_name[0] != '.')
            my_printf("%s  ", dir->d_name);
    my_printf("\n");
}

int main(int ac, char **av)
{
    if (ac == 1)
        basic_ls(opendir("."));
    if (ac > 1 && check_open(opendir(av[ac -1])) == 84)
        return 84;
    if (ac == 2 && av[1][0] != '-')
        basic_ls(opendir(av[1]));
    if (ac == 3 && av[1][1] == 'a')
        lsa(opendir(av[2]));
    if (ac == 2 && av[1][1] == 'h')
        my_printf("%s\n", HELP);
    if (ac == 3 && av[1][1] == 'l')
        lsl(av[2]);
    return 0;
}