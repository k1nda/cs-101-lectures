// Среднее значение трёх чисел с использованием массивов, константы и вспомогательной функции

#include <cs50.h>
#include <stdio.h>

// Константа
const int N = 3;

// Прототип функции
float average(int length, int array[]);

int main(void)
{
    // Получение входных значений, введённых пользователем
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Вывод среднего значения
    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{
    // Рассчёт среднего значения
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}

