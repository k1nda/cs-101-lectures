// Абстракция с аргументами

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

// Описание функции meow с аргументом n
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
