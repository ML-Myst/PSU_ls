/*
** EPITECH PROJECT, 2019
** my_convert_num
** File description:
** convert number into ...
*/
#include "../include/printf.h"

void my_convert_num(char *str, int nbr)
{
    int lenght = my_strlen(str);
    int i = 0;
    char result[20];
    char *table;
    int n = 0;

    while (nbr > 0) {
        result[i] = (nbr % lenght);
        nbr /= lenght;
        i++;
    }
    table = result;
    table[i] = '\0';
    i = 0;
    while (table[i] != '\0') {
        n = table[i];
        table[i] = str[n];
        i++;
    }
    my_putstr(my_revstr(table));
}

void my_convert_bin(int nbr)
{
    int i = 0;
    char result[20];
    while (nbr > 0) {
        result[i] = ((nbr % 2) + 48);
        nbr /= 2;
        i++;
    }
    result[i] = '\0';
    my_putstr(my_revstr(result));
}
