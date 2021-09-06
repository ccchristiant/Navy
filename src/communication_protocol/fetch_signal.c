/*
** EPITECH PROJECT, 2021
** fetch_signal.c
** File description:
** fetch_signal fonction
*/

#include "my.h"
#include "struct.h"
#include "navy.h"
#include <signal.h>

void fetch_signal(int sig)
{
    if (sig == SIGUSR1)
        p.attack = my_strcat(p.attack, "0");
    else if (sig == SIGUSR2)
        p.attack = my_strcat(p.attack, "1");
    else
        return;
}
