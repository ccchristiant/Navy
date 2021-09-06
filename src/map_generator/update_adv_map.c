/*
** EPITECH PROJECT, 2021
** update_adv_map.c
** File description:
** update ennemy's map
*/

#include "navy.h"
#include "macro.h"

void update_adv_map(int touch)
{
    int col = p.attack[0] - 'A' + 1;
    int lig = CTOI(p.attack[1]);

    if (touch == 0)
        p.adv_map[18 + lig * 18 + col * 2] = 'x';
    else
        p.adv_map[18 + lig * 18 + col * 2] = 'o';
}