/*
** EPITECH PROJECT, 2021
** update_map.c
** File description:
** update map in response to the attack
*/

#include "my.h"
#include "struct.h"
#include "navy.h"
#include "error.h"
#include "macro.h"
#include "com_protocol.h"
#include <signal.h>
#include <stdio.h>

int update_map(void)
{
    int col = attack_traduction(p.attack)[0] - 'A' + 1;
    int lig = CTOI(attack_traduction(p.attack)[1]);

    if (p.map[18 + lig * 18 + col * 2] >= '2' && \
        p.map[18 + lig * 18 + col * 2] <= '5') {
        p.map[18 + lig * 18 + col * 2] = 'x';
        p.get_hit += 1;
        return (0);
    }
    else {
        p.map[18 + lig * 18 + col * 2] = 'o';
        return (1);
    }
}