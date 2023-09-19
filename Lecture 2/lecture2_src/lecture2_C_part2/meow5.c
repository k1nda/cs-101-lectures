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

// выводится "Meow" один раз
void meow(void)
{
    printf("meow\n");
}
