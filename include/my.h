/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** mylib header file
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_


int my_strtol(char const *str, char **end_ptr);
char *my_nbrtostr(int nb);
char *my_strdup(char const *src);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int n);
int my_strcmp(char const *s1, char const *s2);
int my_putnbr(int nb);
int my_compute_power_it(int nb, int p);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int len_alphanum_str(char const *str);
int my_isnum(char c);
int my_alphanum(char c);
int my_str_count_word(char const *str);
int my_wordlen(char const *str);
int my_show_word_array(char * const *tab);
char *my_nbrtostr(int nb);
char *my_ctostr(char c);
int my_nbrlen(int nb);
unsigned int my_putunbr(unsigned int nb);
int my_printf(char const *fmt, ...);
char *my_strlowcase(char *str);
char *my_itoa(int nb);
char *fill_octal(int n);
int my_octal(int n);
char *my_hexa(long n);
char *my_binary(int n);

// wrapper

void wrap_putchar(va_list ap);
void wrap_putnbr(va_list ap);
void wrap_putstr(va_list ap);
void wrap_octal(va_list ap);
void wrap_percent(va_list ap);
void wrap_print_adress(va_list ap);
void wrap_upper_hexa(va_list ap);
void wrap_lower_hexa(va_list ap);
void wrap_binary(va_list ap);
void wrap_unsigned_number(va_list ap);
void wrap_putstr_convert(va_list ap);

#endif
