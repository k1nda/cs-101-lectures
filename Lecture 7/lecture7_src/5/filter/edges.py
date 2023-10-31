# Размытие изображения

from PIL import Image, ImageFilter

# Поиск краёв изображения
before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.bmp")
