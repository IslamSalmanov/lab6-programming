# Запрос количества студентов
k = int(input("Введите число студентов: "))
# Создание пустого массива
st = []
# Заполнение массива данными о студентах
for i in range(k):
    print(f"Студент №{i+1}")
    n = input("Введите имя: ")
    a = int(input("Введите возраст: "))
    b = float(input("Введите балл: "))
    st.append((n, a, b))
# Нахождение самого старшего
ol = max(st, key=lambda s: s[1])
print(f"Самый старший: {ol[0]}, {ol[1]} лет")
# Нахождение самого высокого балла
bb = max(st, key=lambda s: s[2])
print(f"Лучший студент: {bb[0]}, балл: {bb[2]}")
# Нахождение среднего возраста
sv = sum(s[1] for s in st) / len(st)
print(f"Средний возраст: {sv}")
# Сортировка по баллу
sorst = sorted(st, key=lambda s: s[2], reverse=True)
print("Сортировка по баллу:")
for n, a, b in sorst:
    print(f"{n}: {b}")
