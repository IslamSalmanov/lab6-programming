#include <iostream>
#include <vector>
#include <random>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    srand(time(0));
    //Ввод числа N
    int n;
    cout << "Введите число N: ";
    cin >> n;
    //Создание массива
    vector<int>m(n);
    for(int i =0; i<n; ++i){m[i]=rand()%100+1;}
    //Вывод исходного массива
    cout << "Исходный массив: ";
    for(int i=0; i<n; ++i){cout << m[i] << " ";}
    cout << "\n";
    //Вывод суммы элементов
    cout << "Сумма: " << accumulate(m.begin(), m.end(), 0) << "\n";
    //Создание аргументов для нахождения среднего значения
    double s=accumulate(m.begin(), m.end(), 0);
    double k=n;
    //Вывод среднего значения
    cout << "Среднее: " << s / k << "\n";
    //Вывод максимального и минимального элемента
    cout << "Минимальное: " << *min_element(m.begin(), m.end()) << "\n";
    cout << "Максимальное: " << *max_element(m.begin(), m.end()) << "\n";
    //Сортировка массива
    sort(m.begin(), m.end());
    cout << "Отсортированный: ";
    for(int i=0; i<n; ++i){cout << m[i] << " ";}
    cout << "\n";
    //Удаление дубликатов
    m.erase(unique(m.begin(), m.end()), m.end());
    cout << "Без дубликатов: ";
    for(int i=0; i<m.size(); ++i){cout << m[i] << " ";}
    cout << "\n";
    return 0;
}