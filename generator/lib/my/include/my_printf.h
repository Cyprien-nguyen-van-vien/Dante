/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** printf module header
*/

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H

    #include <stdarg.h>

typedef struct flag {
    char *flag;
    char *(*func) (va_list, char *);
} flag_t;

typedef struct format {
    char charac;
    int (*func) (char const *, int);
} format_t;

typedef struct info {
    int hash;
    int plus;
    int zero;
    int num;
} info_t;

extern const flag_t FLAGS[15];
extern const format_t FORMATS[16];

int add_hash(char *, char *, int, info_t *);
int add_zeros(char *, char *, int, info_t *);
int format_digit(char const *, int);
int format_long(char const *, int);
int format_plus(char const *, int);
int format_point(char const *, int);
int get_flag_size(char *, flag_t);

char *flag_binary(va_list, char *);
char *flag_character(va_list, char *);
char *flag_hexa_low(va_list, char *);
char *flag_hexa_up(va_list, char *);
char *flag_integer(va_list, char *);
char *flag_long(va_list, char *);
char *flag_octal(va_list, char *);
char *flag_oct_string(va_list, char *);
char *flag_percentage(va_list, char *);
char *flag_pointer(va_list, char *);
char *flag_string(va_list, char *);
char *flag_unsigned(va_list, char *);
char *format_number(char *, char *, int);
char *format_string(char *, char *);
char *print_core(char *, va_list);
char *reformat_less(char *, char *, int);
char *reformat_nonalpha(char *, int);

void identify_char(char *, int *, info_t *);
void identify_format(char *, char const *, int *, info_t *);
void process_format(char *, int, int *, int *);

#endif
