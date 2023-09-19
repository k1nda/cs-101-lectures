// Пример использования логических операторов

#include <cs50.h>
#include <stdio.h>

int main (void)
{
  	// Запрос пользователя, согласен ли он
  	char c = get_char("Do you agree? ");
  	// Проверка, согласен ли пользователь
  	if (c == 'y' || c == 'Y')
  	{
  		printf("Agreed.\n");
  	}
  	else if (c == 'n' || c == 'N')
  	{
  		printf("Not agreed.\n");
  	}
}
