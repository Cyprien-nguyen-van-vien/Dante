/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_putstr function
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    int size = my_strlen(str);

    write(1, str, size);
}
