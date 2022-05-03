/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** printf functions
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int my_printf(char *format, ...)
{
    int size = 0;
    char *output = NULL;
    va_list list;

    va_start(list, format);
    output = print_core(format, list);
    va_end(list);
    my_putstr(output);
    size = my_strlen(output);
    free(output);
    return (size);
}

int my_fprintf(int fd, char *format, ...)
{
    int size = 0;
    char *output = NULL;
    va_list list;

    va_start(list, format);
    output = print_core(format, list);
    va_end(list);
    size = my_strlen(output);
    write(fd, output, size);
    free(output);
    return (size);
}

char *my_stringf(char *format, ...)
{
    char *output = NULL;
    va_list list;

    va_start(list, format);
    output = print_core(format, list);
    va_end(list);
    return (output);
}
