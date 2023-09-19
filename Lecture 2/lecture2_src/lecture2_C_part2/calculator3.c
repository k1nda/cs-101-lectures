// Устраняем ненужные переменные

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
    printf("%i\n", add(x, y));
}

int add(int a, int b)
{
    return a + b;
}
