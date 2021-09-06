/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** compare 2 chaines de caracteres pour savoir si
** la premiere est inferieure, egale ou superieure a la seconde
*/
#include <string.h>
#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] == s2[i]; i++) {
        if (s2[i] == '\0')
            return 0;
    }
    return (s1[i] - s2[i]);
}
