/*
** EPITECH PROJECT, 2020
** my_ls.h
** File description:
** my ls header
*/

#ifndef H_MY_LS
#define H_MY_LS

#include <stdio.h>
#include <dirent.h>
#include "printf.h"

#define HELP "USAGE\n     ./info_file [OPTION]\nDESCRIPTION\n     \
Display element of a repertory.\n"

int Allo_space(char *path);
int GID(char *path);
int UID(char *path);
//char *name(char *path);

#endif /* my_ls */