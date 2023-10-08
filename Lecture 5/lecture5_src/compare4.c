// Вывод адресов двух строк

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ввод пользователем двух строк
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Вывод адреса двух строк
    printf("%p\n", s);
    printf("%p\n", t);
}
