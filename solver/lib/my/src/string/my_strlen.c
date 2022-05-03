/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strlen function
*/

int my_strlen(char const *str)
{
    int size = 0;

    for (size = 0; str[size] != '\0'; size++);
    return (size);
}
