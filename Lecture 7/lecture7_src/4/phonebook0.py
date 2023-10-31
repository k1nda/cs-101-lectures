# Запись имени и номера в CSV файл

import csv

# Открытие CSV файла
file = open("phonebook.csv", "a")

# Получение имени и номера
name = input("Name: ")
number = input("Number: ")

# Запись в файл
writer = csv.writer(file)
writer.writerow([name, number])

# Закрытие файла
file.close()
