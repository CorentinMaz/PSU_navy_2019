/*
** EPITECH PROJECT, 2020
** check_error
** File description:
** check_error
*/

#include "my.h"

int check_charact(char i)
{
    if (i >= 'A' && i <= 'H')
        return (0);
    return (84);
}

int check_num(char i)
{
    if (i >= '1' && i <= '8')
        return (0);
    return (84);
}

int number(char numb, char numb_s, int count_numb)
{
    while (numb != numb_s) {
        if (numb > numb_s) {
            numb_s++;
            count_numb++;
        } else {
            numb++;
            count_numb++;
        }
    }
    return (count_numb);
}

int count_length(char chara, char chara_s, char numb, char numb_s)
{
    int count_chara = 0;
    int count_numb = 0;
    int count = 0;

    while (chara != chara_s) {
        if (chara > chara_s) {
            chara_s++;
            count_chara++;
        } else {
            chara++;
            count_chara++;
        }
    }
    count_numb = number(numb, numb_s, count_numb);
    count = count_chara + count_numb;
    return (count + 1);
}

int check_num_nav(char **pos)
{
    for (int i = 0; pos[i] != NULL; i++) {
        if (count_length(pos[i][2], pos[i][5], pos[i][3],
            pos[i][6]) != my_get_nbr(pos[i][0]))
            return (84);
    }
    return (0);
}