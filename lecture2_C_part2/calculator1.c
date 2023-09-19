// Ошибка с областью видимости переменных

#include <cs50.h>
#include <stdio.h>

int add(void);

int main(void)
{
   // Запрос у пользователя переменной x
    int x = get_int("x: ");

   // Запрос у пользователя переменной y
    int y = get_int("y: ");

   // Выполнение сложения
    int z = add();
    printf("%i\n", z);
}

int add(void)
{
    return x + y;
}
