/*
** EPITECH PROJECT, 2021
** get_attack.c
** File description:
** get_attack fonction
*/

#include "my.h"
#include "error.h"
#include <stdio.h>

char *get_attack(void)
{
    char *attack = "";
    size_t len = 0;
    size_t nbrchar = 0;

    my_printf("attack: ");
    nbrchar = getline(&attack, &len, stdin);
    attack[2] = '\0';
    if (nbrchar - 1 != 2 || between_A_H(attack[0]) == 84 || \
        between_1_8(attack[1]) == 84) {
        my_printf("wrong position\n");
        attack = get_attack();
    }
    return attack;
}