# Реализация линейного поиска имён с использованием цикла for

# Объявление списка names
names = ["Carter", "David", "John"]

# Запрос имён
name = input("Name: ")

# Поиск по имени
for n in names:
    if name == n:
        print("Found")
        break
else:
    print("Not found")
