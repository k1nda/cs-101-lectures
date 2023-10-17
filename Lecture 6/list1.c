// Реализация списка значений с массивом динамического размера

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Лист размером в 3 элемента
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Инициализация списка значения
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Лист размером в 4 элемента
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // Копирование списка из 3 элементов в список из 4 элементов
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    // Добавление значения в список из 4 элементов
    tmp[3] = 4;

    // Освобождение памяти списка из 3 элементов
    free(list);

    // Запоминание списка из 4 элементов
    list = tmp;

    // Вывод списка
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Освобождение памяти списка
    free(list);
    return 0;
}
