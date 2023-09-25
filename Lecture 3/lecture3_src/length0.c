// Определение длины строки

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Запрос имени пользователя
    string name = get_string("Name: ");

    // Подсчёт количества символов до '\0' (NULL)
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
}
