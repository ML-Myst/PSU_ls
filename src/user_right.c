/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls func
*/
#include "my_ls.h"

void *time_edit(struct stat file)
{
    char string[14];

    my_strncpy(string, ctime(&file.st_mtime) + 4, 12);
    string[14] = '\0';
    my_printf("%s", string);
}

void user_perm(struct stat file)
{
    struct passwd *uid;
    struct group *gid;

    uid = getpwuid(file.st_uid);
    gid = getgrgid(file.st_gid);
    my_printf(file.st_mode & S_IRUSR ? "r" : "-");
    my_printf(file.st_mode & S_IWUSR ? "w" : "-");
    my_printf(file.st_mode & S_IXUSR ? "x" : "-");
    my_printf(file.st_mode & S_IRGRP ? "r" : "-");
    my_printf(file.st_mode & S_IWGRP ? "w" : "-");
    my_printf(file.st_mode & S_IXGRP ? "x" : "-");
    my_printf(file.st_mode & S_IROTH ? "r" : "-");
    my_printf(file.st_mode & S_IWOTH ? "w" : "-");
    my_printf(file.st_mode & S_IXOTH ? "x " : "- ");
    my_printf("%d ", file.st_nlink);
    my_printf("%s ", uid->pw_name);
    my_printf("%s ", gid->gr_name);
    my_printf("%i ", file.st_size);
    time_edit(file);
}

void lsl(char *path)
{
    DIR *directory = opendir(path);
    struct dirent *dir;
    struct stat file;

    while ((dir = readdir(directory)) != NULL)
        if (dir->d_name[0] != '.') {
            my_printf(dir->d_type & DT_REG ? "-" : "d");
            stat(path, &file);
            user_perm(file);
            my_printf(" %s\n", dir->d_name);
        }
}