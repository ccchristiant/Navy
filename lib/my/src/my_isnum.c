/*
** EPITECH PROJECT, 2021
** my_char_alphanum.c
** File description:
** return 1 if the char is alpha num,
** return 0 if not.
*/

int my_isnum(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
