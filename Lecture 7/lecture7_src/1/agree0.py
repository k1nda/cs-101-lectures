# Пример использования логических операторов

from cs50 import get_string

# Запрос пользователя, согласен ли он
s = get_string("Do you agree? ")

# Проверка, согласен ли пользователь
if s == "Y" or s == "y":
    print("Agreed.")
elif s == "N" or s == "n":
    print("Not agreed.")
