# Вывод аргументов командной строки с индексацией argv

from sys import argv

for i in range(len(argv)):
    print(argv[i])
