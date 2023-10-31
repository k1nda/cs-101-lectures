# Реализация линейного поиска имён с использованием цикла for и оператора принадлежности 'in'

# Объявление списка names
names = ["Carter", "David", "John"]

# Запрос имён
name = input("Name: ")

# Поиск по имени
if name in names:
    print("Found")
else:
    print("Not found")
