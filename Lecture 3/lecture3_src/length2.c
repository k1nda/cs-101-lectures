// Определение длины строки c помощью функции

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Запрос имени пользователя
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("%i\n", length);
}
