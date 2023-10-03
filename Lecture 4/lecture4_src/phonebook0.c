// Реализация телефонного справочника без использования структуры

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Объявление и инициализация массивов строк
    string names[] = {"Carter", "David", "John"};
    string numbers[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // Поиск по имени, введённому пользователем
    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
