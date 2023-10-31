# Пример использования логических операторов c использованием списка

from cs50 import get_string

# Запрос пользователя, согласен ли он
s = get_string("Do you agree? ").lower()

# Проверка, согласен ли пользователь
if s.lower() in ["y", "yes"]:
    print("Agreed.")
elif s.lower() in ["n", "no"]:
    print("Not agreed.")
