// Сложение с переменными типа long

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Запрос у пользователя переменной x
    long x = get_long("x: ");

   // Запрос у пользователя переменной y
    long y = get_long("y: ");

   // Выполнение сложения
    printf("%li\n", x + y);
}
