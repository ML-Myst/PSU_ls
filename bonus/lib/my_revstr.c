/*
** EPITECH PROJECT, 2019
** my revstr
** File description:
** reverse a string
*/

static int leng(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x++;
    }
    return (x);
}

char *my_revstr(char *str)
{
    char temp;
    int a = 0;
    int len = leng(str) - 1;

    while (a < len) {
        temp = str[len];
        str[len] = str[a];
        str[a] = temp;
        len--;
        a++;
    }
    return (str);
}
