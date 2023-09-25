// Среднее значение трёх чисел с использованием массивов

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Получение входных значений, введённых пользователем
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Вывод среднего значения
    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}
