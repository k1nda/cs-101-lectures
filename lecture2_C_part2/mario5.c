// Выводит сетку кирпичей размером n на n с вложенными циклами

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Size: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
