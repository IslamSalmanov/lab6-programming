# Создание матрицы
mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]
# Транспонирование
tr = [list(row) for row in zip(*mat)]
# Вывод исходной матрицы
print("Исходная матрица")
for row in mat:
    for el in row:
        print(f"{el:4}", end="")
    print()
# Вывод транспонированной матрицы
print("Транспонированная матрица")
for row in tr:
    for el in row:
        print(f"{el:4}", end="")
    print()
