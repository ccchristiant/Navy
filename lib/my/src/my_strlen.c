/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** counts and returns the number of characters
** found in the string passed as parameter
*/

int my_strlen(char const *str)
{
    int count = 0;

    for (; str[count]; count++);
    return (count);
}
