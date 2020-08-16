/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** reproduce the printf func.
*/

#include <stdarg.h>
#include "../include/printf.h"

static void simple(char c, va_list ap)
{
    switch(c)
    {
        case 'd':
        case 'i':
            my_put_nbr(va_arg(ap, int));
            break;

        case 's':
            my_putstr(va_arg(ap, char *));
            break;

        case 'c':
            my_putchar(va_arg(ap, int));
            break;

        case '%':
            my_putchar('%');
            break;
    }
}

static void convert(char c, va_list ap)
{
    switch(c)
    {
        case 'x':
            my_convert_num("0123456789abcdef", va_arg(ap, int));
            break;

        case 'X':
            my_convert_num("0123456789ABCDEF", va_arg (ap, int));
            break;

        case 'o':
            my_convert_num("01234567", va_arg(ap, int));
            break;

        case 'b':
            my_convert_bin(va_arg(ap, int));
            break;
    }
}

int my_printf(char *str, ... )
{
    va_list ap;

    va_start(ap, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%') {
            simple(str[i + 1], ap);
            convert(str[i + 1], ap);
            i += 1;
        } else
            my_putchar(str[i]);
        }
    return (0);
}