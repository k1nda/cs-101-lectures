// Пример использования логических операторов

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Запрос пользователя, согласен ли он
    char c = get_char("Do you agree? ");

    // Проверка, согласен ли пользователь
    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not agreed.\n");
    }
}
