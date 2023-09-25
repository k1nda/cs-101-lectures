// Определение длины строки c помощью функции

#include <cs50.h>
#include <stdio.h>

int string_length(string s);

int main(void)
{
    // Запрос имени пользователя
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    // Подсчёт количества символов до '\0' (NULL)
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
