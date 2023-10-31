# Среднее значение трёх чисел с использованием списка и цикла

from cs50 import get_int

# Инициализация массива scores и его элементов
scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)

# Вывод среднего значения
average = sum(scores) / len(scores)
print(f"Average: {average}")
