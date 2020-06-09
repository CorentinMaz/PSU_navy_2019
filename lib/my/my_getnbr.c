/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    long res = 0;

    while (str[i] < 48 || str[i] > 57)
        i++;
    while ((str[i] >= 48) && (str[i] <= 57)) {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res);
}