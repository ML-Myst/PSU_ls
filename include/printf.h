/*
** EPITECH PROJECT, 2019
** printf.h
** File description:
** header
*/

#ifndef H_PRINTF
#define H_PRINTF

int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
char *my_revstr(char *str);
void my_convert_num(char *str, int nbr);
void my_convert_bin(int nbr);
int my_printf(char *str, ... );
char *my_strncpy(char *dest, char const *src, int n);

#endif
