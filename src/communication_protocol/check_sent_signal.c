/*
** EPITECH PROJECT, 2021
** check_sent_signal.c
** File description:
** check_sent_signal function
*/

#include <signal.h>
#include "navy.h"
#include "com_protocol.h"
#include "macro.h"

void check_sent_signal(int sig, UNUSED siginfo_t *info, UNUSED void *u)
{
    if (sig == SIGUSR1)
        send_signal(p.adv_pid, p.attack);
    if (sig == SIGUSR2)
        p.status = 2;
}

