/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** Functions header
*/

#ifndef MY_H
    #define MY_H

    #include "my_printf.h"

    #define ABS(x) ((x) < 0 ? -(x) : (x))
    #define CTOI(x) ((x) - '0')
    #define ITOC(x) ((x) + '0')
    #define MAX(x, y) ((x) > (y) ? (x) : (y))
    #define MIN(x, y) ((x) < (y) ? (x) : (y))

    #define BINARY_BASE "01"
    #define OCTAL_BASE "01234567"
    #define HEXA_LOWER_BASE "0123456789abcdef"
    #define HEXA_UPPER_BASE "0123456789ABCDEF"

// Arrays module
int my_arraylen(char **array);
int my_show_word_array(char * const * array);
void my_sort_int_array(int *array, int size);
void my_sort_string_array(char **array);

// Infinites module
int my_inf_cmp(char const *nbr1, char const *nbr2);
char *my_inf_abs(char const *nbr);
char *my_inf_getnbr(char const *str);
char *my_inf_getnbr_base(char const *str, char const *base);
char *my_inf_log(char *nbr, char *x);
char *my_inf_opposite(char const *nbr);
char *my_inf_parsenbr_base(char *nbr, char const *base);
char *my_inf_power(char *nbr, char *p);
char *my_infinadd(char const *nbr1, char const *nbr2);
char *my_infindiv(char const *nbr1, char const *nbr2);
char *my_infinmod(char const *nbr1, char const *nbr2);
char *my_infinmult(char const *nbr1, char const *nbr2);
char *my_infinsub(char const *nbr1, char const *nbr2);

// Math module
int my_factorial(int nbr);
int my_find_prime_sup(int nbr);
int my_is_prime(int nbr);
int my_log(int nbr, int log);
int my_llog(long lnbr, int log);
int my_power(int nbr, int power);
int my_square_root(int nbr);

// Number module
int my_getnbr(char const *str);
int my_getnbr_base(char const *str, char const *base);
int my_is_number(char *str);
int my_nbrlen(int nbr);
int my_lnbrlen(long lnbr);

// Printf module
int my_fprintf(int fd, char *format, ...);
int my_printf(char *format, ...);
char *my_stringf(char *, ...);

// Strings module

// Other functions
void my_free(int size, ...);
void my_free_arrays(int size, ...);
void my_putchar(char c);
void my_putnbr(int nbr);
void my_putstr(char const *str);

int my_strcmp(char const *str1, char const *str2);
int my_str_contains(char const *str, char const *pattern);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_str_starts(char const *str, char const *pattern);
int my_strlen(char const *str);
int my_strncmp(char const *, char const *, int);
int my_strtoi(char **);

char *my_number(char **);
char *my_parsenbr(int);
char *my_parsenbr_base(int, char const *);
char *my_parsenbr_long(long long);
char *my_revstr(char *);
char **my_str_to_word_array(char const *);
char *my_strcapitalize(char *);
char *my_strcat(char const *, char const *);
char *my_strcpy(char *, char const *);
char *my_strdup(char const *);
char *my_strlowcase(char *);
char *my_strncat(char *, char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strrep(char *, char const *, char const *);
char **my_strsplit(char const *, char);
char *my_strstr(char *, char const *);
char *my_strupcase(char *);
char *my_substr(char const *, int, int);
char *my_substr_size(char const *, int, int, int);
void my_strfill(char *, int, char);
void my_strxcat(char *, char *, int);

#endif
