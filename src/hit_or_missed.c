/*
** EPITECH PROJECT, 2021
** hit_or_missed.c
** File description:
** hit or missed fonction
*/

#include "navy.h"
#include "my.h"
#include "macro.h"
#include <signal.h>

void hit_or_missed(int sig, UNUSED siginfo_t *info, UNUSED void *u)
{
    my_printf("%s: ", p.attack);
    if (sig == SIGUSR1) {
        my_printf("hit\n\n");
        p.adv_get_hit += 1;
        update_adv_map(0);
    }
    if (sig == SIGUSR2) {
        my_printf("missed\n\n");
        update_adv_map(1);
    }
}