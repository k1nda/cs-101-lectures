// Погрешности арифметики с плавающей точкой

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Запрос у пользователя переменной x
    int x = get_int("x: ");

   // Запрос у пользователя переменной y
    int y = get_int("y: ");

   // Деление x на y
    float z = (float) x / (float) y;
    printf("%.20f\n", z);
}
