// Вспомогательная функция с аргументами и возвращаемым значением

#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{
   // Запрос у пользователя переменной x
    int x = get_int("x: ");

   // Запрос у пользователя переменной y
    int y = get_int("y: ");

   // Выполнение сложения
    int z = add(x, y);
    printf("%i\n", z);
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}
