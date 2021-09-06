/*
** EPITECH PROJECT, 2021
** waiting_my_turn.c
** File description:
** waiting_my_turn fonction
*/

#include "my.h"
#include "struct.h"
#include "navy.h"
#include "error.h"
#include "com_protocol.h"
#include <stdio.h>
#include <signal.h>

void waiting_my_turn(void)
{
    struct sigaction sa = {0};

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &wait_signal;
    my_printf("waiting for enemy's attack...\n");
    while (my_strlen(p.attack) != 8) {
        sigaction(SIGUSR1, &sa, NULL);
        sigaction(SIGUSR2, &sa, NULL);
    }
    my_printf("%s: ", attack_traduction(p.attack));
    if (update_map() == 0) {
        my_printf("hit\n\n");
        kill(p.adv_pid, SIGUSR1);
    }
    else {
        my_printf("missed\n\n");
        kill(p.adv_pid, SIGUSR2);
    }
    p.status = 1;
}