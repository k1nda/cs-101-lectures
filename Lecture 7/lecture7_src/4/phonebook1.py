# Запись имени и номера в CSV файл

import csv

# Получение имени и номера
name = input("Name: ")
number = input("Number: ")

# Открытие CSV файла
with open("phonebook.csv", "a") as file:

    # Запись в файл
    writer = csv.writer(file)
    writer.writerow([name, number])
