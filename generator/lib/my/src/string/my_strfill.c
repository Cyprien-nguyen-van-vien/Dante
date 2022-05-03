/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_strfill function
*/

void my_strfill(char *array, int size, char def)
{
    for (int i = 0; i < size - 1; i++) {
        array[i] = def;
    }
    array[size - 1] = '\0';
}
