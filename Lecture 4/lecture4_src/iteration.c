// Пример рисования пирамиды из марио с помощью итерационного цикла (итерации)

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    // Запрос пользователя на ввод высоты
    int height = get_int("Height: ");

    // Рисуем пирамиду
    draw(height);
}

void draw(int n)
{
    // Рисуем пирамиду высотой n
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
