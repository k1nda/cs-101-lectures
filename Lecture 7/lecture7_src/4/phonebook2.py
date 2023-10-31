# Запись имени и номера в CSV файл с использованием DictWriter

import csv

# Получение имени и номера
name = input("Name: ")
number = input("Number: ")

# Открытие CSV файла
with open("phonebook.csv", "a") as file:

    # Запись в файл
    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})
