// Абстракция с параметрами

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

// Выводится "Meow" n раз
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
