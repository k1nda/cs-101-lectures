# Генерация qr кода
# https://github.com/lincolnloop/python-qrcode

import os
import qrcode

# Генерация qr кода
img = qrcode.make("https://youtu.be/xvFZjo5PgG0")

# Сохранение в виде PNG изображения
img.save("qr.png", "PNG")

# Открытие изображения
os.system("open qr.png")
