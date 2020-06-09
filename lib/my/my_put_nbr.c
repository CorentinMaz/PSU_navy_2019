/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int cas = 0;

    if (nb < 0) {
        my_putchar('-');
        if (nb == -2147483648) {
            nb = 214748364;
            cas = 1;
        } else
            nb = nb * (-1);
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    if (cas == 1)
        my_putchar('8');
}