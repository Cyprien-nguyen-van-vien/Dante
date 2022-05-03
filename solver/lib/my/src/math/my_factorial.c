/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_factorial function
*/

static int factorial_rec(int nbr)
{
    if (nbr == 0) {
        return (1);
    } else if (nbr < 0) {
        return (0);
    } else {
        return (nbr * factorial_rec(nbr - 1));
    }
}

int my_factorial(int nbr)
{
    int total = factorial_rec(nbr);

    if (nbr > 12) {
        total = 0;
    }
    return (total);
}
