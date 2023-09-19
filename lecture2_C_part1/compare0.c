#include <cs50.h>
#include <stdio.h>

int main(void)
{
  	// Запрос у пользователя двух целочисленных значений 
  	int x = get_int("What's x? ");
  	int y = get_int("What's y? ");

  	// Сравнение двух целочисленных значений
	if (x < y)
	{
  		printf("x is less than y\n");
	}
}
