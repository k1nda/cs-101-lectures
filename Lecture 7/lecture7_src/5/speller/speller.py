import re
import sys
import time

from dictionary import check, load, size, unload

# Максимальная длина слова
# (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
LENGTH = 45

# Словарь по умолчанию
WORDS = "dictionaries/large"

# Проверка на количество вводимых аргументов
if len(sys.argv) != 2 and len(sys.argv) != 3:
    print("Usage: speller [dictionary] text")
    sys.exit(1)

# Benchmarks [Контрольные показатели]
time_load, time_check, time_size, time_unload = 0.0, 0.0, 0.0, 0.0

# Определение какой словарь использовать
dictionary = sys.argv[1] if len(sys.argv) == 3 else WORDS

# Загрузка словаря
before = time.process_time()
loaded = load(dictionary)
after = time.process_time()

# Выход, если словарь не удаётся загрузить
if not loaded:
    print(f"Could not load {dictionary}.")
    sys.exit(1)

# Вычисление времени, затраченнего на загрузку словаря
time_load = after - before

# Попытка открыть текстовый документ
text = sys.argv[2] if len(sys.argv) == 3 else sys.argv[1]
file = open(text, "r", encoding="latin_1")
if not file:
    print("Could not open {}.".format(text))
    unload()
    sys.exit(1)

# Сообщение о выводе орфографических ошибок
print("\nMISSPELLED WORDS\n")

# Подготовка к проверки на ошибки
word = ""
index, misspellings, words = 0, 0, 0

# Проверки на ошибки в каждом слова в текстовом документе
while True:
    c = file.read(1)
    if not c:
        break

    # Разрешение алфавитных символов и апострофов (для слов с притягательным падежом)
    if re.match(r"[A-Za-z]", c) or (c == "'" and index > 0):

        # Добавление символа к слову
        word += c
        index += 1

        # Игнорирование алфавитные строки, которые слишком длинны, чтобы быть словами
        if index > LENGTH:

            # Избавление от остатка из буквенно-цифровой строки
            while True:
                c = file.read(1)
                if not c or not re.match(r"[A-Za-z]", c):
                    break

            # Следующее слово в текстовом документе
            index, word = 0, ""

    # Игнорирование слов с числами (подобно MS Word)
    elif c.isdigit():

        # Избавление от остатка из буквенно-цифровой строки
        while True:
            c = file.read(1)
            if not c or (not c.isalpha() and not c.isdigit()):
                break

        # Следующее слово в текстовом документе
        index, word = 0, ""

    # Условие на поиск целого слова
    elif index > 0:

        # Обновление счётчика
        words += 1

        # Проверка орфографии слова
        before = time.process_time()
        misspelled = not check(word)
        after = time.process_time()

        # Обновление benchmark [показателя]
        time_check += after - before

        # Вывод слова, если оно с ошибками
        if misspelled:
            print(word)
            misspellings += 1

        # Следующее слово в текстовом документе
        index, word = 0, ""

# Закрытие файла
file.close()

# Определение размера словаря
before = time.process_time()
n = size()
after = time.process_time()

# Расчёт затраченного времени на определение размера словаря
time_size = after - before

# Выгрузка словаря
before = time.process_time()
unloaded = unload()
after = time.process_time()

# Отмена действия, если словарь не выгружен
if not unloaded:
    print(f"Could not load {dictionary}.")
    sys.exit(1)

# Расчёт затраченного времени на определение размера словаря
time_unload = after - before

# Отчёт о контрольных показателях [benchmark]
print(f"\nWORDS MISSPELLED:     {misspellings}")
print(f"WORDS IN DICTIONARY:  {n}")
print(f"WORDS IN TEXT:        {words}")
print(f"TIME IN load:         {time_load:.2f}")
print(f"TIME IN check:        {time_check:.2f}")
print(f"TIME IN size:         {time_size:.2f}")
print(f"TIME IN unload:       {time_unload:.2f}")
print(f"TOTAL TIME:           {time_load + time_check + time_size + time_unload:.2f}\n")

# Успешный выход из программ
sys.exit(0)
