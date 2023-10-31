// Абстракция

#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// Описание функции meow
void meow(void)
{
    printf("meow\n");
}
