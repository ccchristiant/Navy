/*
** EPITECH PROJECT, 2021
** play_game.c
** File description:
** play_game fonction
*/

#include "my.h"
#include "struct.h"
#include "navy.h"
#include "error.h"
#include "com_protocol.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int play_game(void)
{
    while (p.get_hit < 14 && p.adv_get_hit < 14) {
        p.attack = malloc(sizeof(char) * ((p.status == 1) ? 3 : 9));
        p.attack[0] = '\0';
        if (p.round % 2 != 0) {
            my_printf("my positions:\n%s\n\n", p.map);
            my_printf("enemy's positions:\n%s\n\n", p.adv_map);
        }
        if (p.status == 1)
            my_turn_to_play();
        else
            waiting_my_turn();
        p.round++;
        free(p.attack);
    }
    my_printf("my positions:\n%s\n\n", p.map);
    my_printf("enemy's positions:\n%s\n\n", p.adv_map);
    my_printf((p.adv_get_hit == 14) ? "I won\n" : "Enemy won\n");
    return ((p.adv_get_hit == 14) ? 0 : 1);
}