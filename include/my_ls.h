/*
** EPITECH PROJECT, 2020
** my_ls.h
** File description:
** my ls header
*/

#ifndef H_MY_LS
#define H_MY_LS

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "printf.h"

#define HELP "USAGE\n     ./info_file [OPTION]\nDESCRIPTION\n     \
Display element of a repertory.\n"

void lsl(char *path);

#endif /* my_ls */