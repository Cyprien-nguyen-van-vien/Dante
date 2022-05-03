/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** Printf variables
*/

#include <stddef.h>
#include "my.h"

const flag_t FLAGS[15] = { { "ld", &flag_long }, { "d", &flag_integer }, \
{ "li", &flag_long }, { "i", &flag_integer }, { "u", &flag_unsigned }, \
{ "b", &flag_binary }, { "o", &flag_octal }, { "x", &flag_hexa_low }, \
{ "X", &flag_hexa_up}, { "c", &flag_character}, { "s", &flag_string }, \
{ "S", &flag_oct_string }, { "p", &flag_pointer}, { "%", &flag_percentage}, \
{ NULL, NULL } };

const format_t FORMATS[16] = { { '+', &format_plus }, { '-', &format_plus }, \
{ '#', &format_plus }, { '.', &format_point }, { '0', &format_digit }, \
{ '1', &format_digit }, { '2', &format_digit }, { '3', &format_digit }, \
{ '4', &format_digit }, { '5', &format_digit }, { '6', &format_digit }, \
{ '7', &format_digit }, { '8', &format_digit }, { '9', &format_digit }, \
{ 'l', &format_long }, { '\0', NULL } };
