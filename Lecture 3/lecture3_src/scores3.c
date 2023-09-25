// Среднее значение трёх чисел с использованием массивов и цикла

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Получение входных значений, введённых пользователем
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Вывод среднего значения
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
