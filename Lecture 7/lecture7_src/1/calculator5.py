# Реализация функции get_int с циклом

def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Not an integer")


def main():

    # Запрос у пользователя переменной x
    x = get_int("x: ")

    # Запрос у пользователя переменной y
    y = get_int("y: ")

    # Сложение
    print(x + y)


main()
