/*
** EPITECH PROJECT, 2021
** attack_response.c
** File description:
** attack_response fonction
*/

#include "com_protocol.h"
#include "navy.h"
#include <signal.h>

void attack_response_ok(int pid)
{
    usleep(100000);
    kill(pid, SIGUSR2);
    p.status = 1;
}

void attack_response_err(int pid)
{
    usleep(3000);
    kill (pid, SIGUSR1);
}