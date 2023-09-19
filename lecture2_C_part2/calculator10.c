// Деление переменных типа long, с демонстрацией результата типа double

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // Запрос у пользователя переменной x
    long x = get_long("x: ");

   // Запрос у пользователя переменной y
    long y = get_long("y: ");

   // Деление x на y
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}
