/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** similar as my_strcmp, except it compares at most n
** bytes of the first string and the second string
*/
#include <stdio.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && i < n) {
        i++;
    }
    return (s1[i] - s2[i]);
}
