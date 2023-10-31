# Реализация функции get_int

def get_int(prompt):
    return int(input(prompt))


def main():

    # Запрос у пользователя переменной x
    x = get_int("x: ")

    # Запрос у пользователя переменной y
    y = get_int("y: ")

    # Сложение
    print(x + y)


main()
