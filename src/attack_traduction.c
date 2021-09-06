/*
** EPITECH PROJECT, 2021
** attack_traduction.c
** File description:
** attack_traduction fonction
*/

#include "my.h"
#include "macro.h"

char *attack_traduction(char *str)
{
    int x = 3;
    int res = 0;
    int power = 0;
    char *pos = "";

    for (; x >= 0; x--, power++)
        res += (str[x] == '1') ? my_compute_power_it(2, power) : 0;
    pos = my_strcat(pos, my_ctostr(res + 'A' - 1));
    res = 0;
    for (x = 7, power = 0; x >= 4; x--, power++)
        res += (str[x] == '1') ? my_compute_power_it(2, power) : 0;
    pos = my_strcat(pos, my_ctostr(ITOC(res)));
    return pos;
}
