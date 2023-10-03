// Рисуем пирамиду с использованием рекурсии

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    // Запрос пользователя на ввод высоты пирамиды
    int height = get_int("Height: ");

    // Рисуем пирамиду
    draw(height);
}

void draw(int n)
{
    // Если нечего рисовать
    if (n <= 0)
    {
        return;
    }

    // Рисуем пирамиду высотой n - 1
    draw(n - 1);

    // Рисуем ещё один ряд шириной n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
