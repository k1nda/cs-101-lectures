// Сравнение двух целочисленных значений

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ввод пользователем двух целых чисел
    int i = get_int("i: ");
    int j = get_int("j: ");

    // Сравнение двух целых чисел
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
