/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** my_sort_int_array function
*/

static void swap_pos(int *array, int index, int target)
{
    int temp = array[index];

    array[index] = array[target];
    array[target] = temp;
}

static int check_array(int *array, int size)
{
    int out = 1;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] > array[i + 1]) {
            out = 0;
            swap_pos(array, i, i + 1);
        }
    }
    return (out);
}

void my_sort_int_array(int *array, int size)
{
    int end = 0;

    while (end < 1) {
        end = check_array(array, size);
    }
}
