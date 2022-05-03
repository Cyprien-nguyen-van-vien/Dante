/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_square_root function
*/

int my_square_root(int nbr)
{
    int count = 0;
    int num = 0;

    if (nbr < 1) {
        return (0);
    }
    while (nbr > 0) {
        num = count * 2 + 1;
        nbr -= num;
        count++;
    }
    return (nbr < 0 ? count - 1 : count);
}
