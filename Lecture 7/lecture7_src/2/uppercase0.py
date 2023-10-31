# Вывод строки заглавными символами [посимвольно]

before = input("Before: ")
print("After:  ", end="")
for c in before:
    print(c.upper(), end="")
print()
