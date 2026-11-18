import random

# Ввод числа N
n = int(input("Введите число N: "))
# Создание массива
m = [random.randint(1, 100) for i in range(n)]
# Вывод требуемых значений
print(f"Первоначальный список: {m}")
print(f"Сумма: {sum(m)}")
print(f"Среднее: {sum(m)/len(m):.2f}")
print(f"Минимальное: {min(m)}")
print(f"Максимальное: {max(m)}")
# Сортировка массива
m.sort()
print(f"Отсортированный список: {m}")
print(f"Без дубликатов: {list(dict.fromkeys(m))}")
