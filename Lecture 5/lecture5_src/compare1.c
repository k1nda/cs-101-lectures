// Сравнение адресов двух строк

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ввод пользователем двух строк
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Сравнение адреса двух строк
    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
