# Пример использования логических операторов c использованием списка

from cs50 import get_string

# Запрос пользователя, согласен ли он
s = get_string("Do you agree? ")

# Проверка, согласен ли пользователь
if s in ["y", "yes"]:
    print("Agreed.")
elif s in ["n", "no"]:
    print("Not agreed.")
