// Конвертация строки в верхний регистр (заглавные буквы) с изначальной проверкой длины строки

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Ввод пользователем строки
    string s = get_string("s: ");

    // Копироварование адреса строки
    string t = s;

    // Конвертация в верхний регистр первого слова в строке
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Вывод строки, дважды
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
