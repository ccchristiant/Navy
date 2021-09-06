/*
** EPITECH PROJECT, 2021
** connection.c
** File description:
** connection fonction
*/

#include "navy.h"
#include "my.h"
#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void usr_connection(int sig, siginfo_t *info, UNUSED void *u)
{
    if (sig == SIGUSR1) {
        p.adv_pid = info->si_pid;
        my_printf("\nenemy connected\n\n");
        kill(p.adv_pid, SIGUSR2);
        p.status = 1;
    }
    if (sig == SIGUSR2) {
        my_printf("successfully connected\n\n");
        p.status = 2;
    }
}
