/*
** EPITECH PROJECT, 2021
** tests_my_printf.c
** File description:
** tests my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, multiple_flag, .init = redirect_all_std)
{
    my_printf("%c / %s / %d / %i / %S", 'b', "epitech", 42, 4, "hello");
    cr_assert_stdout_eq_str("b / epitech / 42 / 4 / hello");
}

Test(my_printf, multiple_string, .init = redirect_all_std)
{
    my_printf("%s / %s / %S", "bonjour", "epitech", "42");
    cr_assert_stdout_eq_str("bonjour / epitech / 42");
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, u_flag, .init = redirect_all_std)
{
    my_printf("%u", 22);
    cr_assert_stdout_eq_str("22");
}

Test(my_printf, c_flag, .init = redirect_all_std)
{
    my_printf("%c", 'c');
    cr_assert_stdout_eq_str("c");
}

Test(my_printf, s_flag_S_flag, .init = redirect_all_std)
{
    my_printf("%s %S", "bonjour epitech", "c'est bien");
    cr_assert_stdout_eq_str("bonjour epitech c'est bien");
}

Test(my_printf, d_flag, .init = redirect_all_std)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(my_printf, d_flag2, .init = redirect_all_std)
{
    my_printf("%d", 98023930);
    cr_assert_stdout_eq_str("98023930");
}

Test(my_printf, o_flag, .init = redirect_all_std)
{
    my_printf("%o", 42);
    cr_assert_stdout_eq_str("52");
}

Test(my_printf, o_flag2, .init = redirect_all_std)
{
    my_printf("%o", 78);
    cr_assert_stdout_eq_str("116");
}

Test(my_printf, pourcent_flag, .init = redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf, n_flag, .init = redirect_all_std)
{
    int c = 0;
    my_printf("12%n\n", &c);
    my_printf("%i\n", c);
    cr_assert_stdout_eq_str("12\n2\n");
}

Test(my_printf, x_flag, .init = redirect_all_std)
{
    my_printf("%x", 500);
    cr_assert_stdout_eq_str("1f4");
}

Test(my_printf, X_flag, .init = redirect_all_std)
{
    my_printf("%X", 500);
    cr_assert_stdout_eq_str("1F4");
}

Test(my_printf, b_flag, .init = redirect_all_std)
{
    my_printf("%b", 500);
    cr_assert_stdout_eq_str("111110100");
}

Test(my_printf, ld_flag, .init = redirect_all_std)
{
    my_printf("%ld", 500);
    cr_assert_stdout_eq_str("500");
}


Test(my_printf, ll_flag, .init = redirect_all_std)
{
    my_printf("%ll", 500);
    cr_assert_stdout_eq_str("500");
}
