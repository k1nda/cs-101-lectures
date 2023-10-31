# Размытие изображения

from PIL import Image, ImageFilter

# Размытие изображения
before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")
