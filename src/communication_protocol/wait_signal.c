/*
** EPITECH PROJECT, 2021
** wait_signal.c
** File description:
** wait_signal fonction
*/

#include "my.h"
#include "com_protocol.h"
#include "struct.h"
#include "macro.h"
#include "navy.h"
#include <signal.h>

void wait_signal(int sig, UNUSED siginfo_t *info, UNUSED void *ucontext)
{
    fetch_signal(sig);
}