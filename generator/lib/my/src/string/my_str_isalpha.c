/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_str_isalpha function
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 63 || (str[i] > 90 && str[i] < 97) || str[i] > 122) {
            return (0);
        }
    }
    return (1);
}
