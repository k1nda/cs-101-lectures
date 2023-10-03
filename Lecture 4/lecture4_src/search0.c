// Реализация линейного поиска, чтобы отыскать целые числа

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Инициализация массива целых чисел
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Поискпо числу, введённому пользователем
    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
