// Выводит сетку кирпичей размером n на n, повторно запрашивая у пользователя положительное целое число

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Указываем размер сетки
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Выводим сетку кирпичей 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
