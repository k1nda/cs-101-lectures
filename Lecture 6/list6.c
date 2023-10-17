// Реализация отсортированного списка с использованием связного списка

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

        // Если список пуст
        if (list == NULL)
        {
            list = n;
        }

        // Если значение находится в начале списка
        else if (n->number < list->number)
        {
            n->next = list;
            list = n; 
        }

        // Если значение находится где-то в середине или в конце списка
        else
        {
            // Перебор по всем node (узлам) в списке
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // Если в конце списка
                if (ptr->next == NULL)
                {
                    // Добавить node
                    ptr->next = n;
                    break;
                }

                // Если в середине списка
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
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
