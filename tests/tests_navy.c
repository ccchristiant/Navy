/*
** EPITECH PROJECT, 2021
** tests_navy.c
** File description:
** tests navy
*/

#include <stddef.h>
#include <signal.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "struct.h"
#include "my.h"
#include "navy.h"

usr_t p = { .attack = "A1" };

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(attack_traduction, good_return_value)
{
    char *bin = "00010001";
    char *test = attack_traduction(bin);
    cr_assert_str_eq("A1", test);
}

// Test(hit_or_missed, correct_stdout_check, .init = redirect_all_std, \
//     .signal = SIGUSR1)
// {
//     cr_assert_stdout_eq_str("A1: ");
//     cr_assert_stdout_eq_str("hit\n\n");
// }