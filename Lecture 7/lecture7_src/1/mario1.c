// Вывод столбца высотой n

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Запрос высоты столбца
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Вывод столбца из #
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}
