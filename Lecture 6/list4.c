// Добавление значений в связный список с помощью цикла for для вывода значений

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    // Выделение памяти для значений
    node *list = NULL;

    // Для каждого аргумента командной строки
    for (int i = 1; i < argc; i++)
    {
        // Преобразование аргумента в int
        int number = atoi(argv[i]);

        // Выделение node для значения
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // Добавление node в список
        n->next = list;
        list = n;
    }

    // Вывод значений
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // Освобождение памяти
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
