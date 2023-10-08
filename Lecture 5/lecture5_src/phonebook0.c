// Сохранение имён и номеров в CSV файл

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Открытие CSV файла
    FILE *file = fopen("phonebook.csv", "a");

    // Ввод пользователем имени и номера
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Вывод значений в файл
    fprintf(file, "%s,%s\n", name, number);

    // Закрытие CSV файла
    fclose(file);
}
