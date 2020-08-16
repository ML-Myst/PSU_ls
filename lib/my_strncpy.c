/*
** EPITECH PROJECT, 2019
** My_lib
** File description:
** this file aims only to build the library my_lib
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
        if (src[i] == '\0') {
            return (dest);
        }
    }
    return (dest);
}