#include <cs50.h>
#include <stdio.h>

int main(void)
{
  	// Запрос у пользователя двух целочисленных значений
  	int x = get_int("What's x?");
  	int x = get_int("What's y? ");

  	// Сравнение двух целочисленных значений
  	if (x < y)
  	{
  		printf("x is less than y\n");
  	}
  	else if (x > y)
  	{
  		printf("x is greater than y\n");
  	}
  	else 
  	{
  		printf("x is equal to y\n");
  	}
}
