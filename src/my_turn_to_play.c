/*
** EPITECH PROJECT, 2021
** my_turn_to_play.c
** File description:
** my_turn_to_play fonction
*/

#include "my.h"
#include "struct.h"
#include "navy.h"
#include "error.h"
#include "com_protocol.h"
#include <signal.h>
#include <stdio.h>

void my_turn_to_play(void)
{
    struct sigaction sa = {0};

    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = &hit_or_missed;
    sigaction(SIGUSR1, &sa, NULL);
    sigaction(SIGUSR2, &sa, NULL);
    p.attack = get_attack();
    send_signal(p.adv_pid, p.attack);
    p.status = 2;
}