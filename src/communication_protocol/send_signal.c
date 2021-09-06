/*
** EPITECH PROJECT, 2021
** send_pid.c
** File description:
** send_pid fonction
*/

#include "my.h"
#include "navy.h"
#include "macro.h"
#include <signal.h>

void send_signal(int pid, char *action)
{
    int letter = 0;
    int nbr = 0;

    letter = action[0] - 'A' + 1;
    nbr = CTOI(action[1]);
    for (int i = 3; i >= 0; i--) {
        (((letter >> i) & 1) == 0) ? kill(pid, SIGUSR1) : kill(pid, SIGUSR2);
        usleep(10000);
    }
    for (int j = 3; j >= 0; j--) {
        (((nbr >> j) & 1) == 0) ? kill(pid, SIGUSR1) : kill(pid, SIGUSR2);
        usleep(10000);
    }
}