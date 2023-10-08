// Конвертация копии строки в верхний регистр без ошибок памяти

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Ввод пользователем строки
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    // Выделение памяти для другой строки
    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    // Копирование строки в память
    strcpy(t, s);

    // Конвертация копии строки
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Вывод строк
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Освобождение памяти
    free(t);
    return 0;
}
