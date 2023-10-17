// Реализация списка значений с массивом динамического размера с realloc

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

    // Инициализация списка значениями
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Изменение размера списка
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    list = tmp;

    // Добавление значения в список
    list[3] = 4;

    // Вывод списка
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Освобождение списка
    free(list);
    return 0;
}
