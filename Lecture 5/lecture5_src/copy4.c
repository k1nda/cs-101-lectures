// Конвертация копии строки в верхний регистр с использованием функции strcpy

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Ввод пользователем строки
    char *s = get_string("s: ");

    // Выделение памяти для другой строки
    char *t = malloc(strlen(s) + 1);

    // Копирование строки в память
    strcpy(t, s);

    // Конвертация копии строки
    t[0] = toupper(t[0]);

    // Вывод строк
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
