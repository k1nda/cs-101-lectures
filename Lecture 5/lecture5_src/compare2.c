// Сравнение двух строк с помощью функции strcmp

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Ввод пользователем двух строк
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Сравнение двух строк
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
