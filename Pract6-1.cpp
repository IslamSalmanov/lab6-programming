#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;
int main(){
    //Запрос количества элементов в списке
    int n;
    cout << "Введите число элементов: ";
    cin >> n;
    //Создание пустых списков
    vector<int>l1;
    vector<int>l2;
    //Заполнение первого списка
    cout << "Заполнение первого списка" << "\n";
    for(int i=0; i<n; ++i){
        cout << "Элемент " << i+1 <<"\n";
        int a;
        cout << "Введите элемент: ";
        cin >> a;
        l1.push_back(a);
    }
    //Заполнение второго списка
    cout << "Заполнение второго списка" << "\n";
    for(int i=0; i<n; ++i){
        cout << "Элемент " << i+1 <<"\n";
        int a;
        cout << "Введите элемент: ";
        cin >> a;
        l2.push_back(a);
    }
    //Множества
    set<int>m1(l1.begin(), l1.end());
    set<int>m2(l2.begin(), l2.end());
    //Нахождение объединения
    set<int>ob;
    set_union(m1.begin(), m1.end(), m2.begin(), m2.end(), inserter(ob, ob.begin()));
    //Нахождение пересечения
    set<int>per;
    set_intersection(m1.begin(), m1.end(), m2.begin(), m2.end(), inserter(per, per.begin()));
    //Нахождение разности
    set<int>raz;
    set_difference(m1.begin(), m1.end(), m2.begin(), m2.end(), inserter(raz, raz.begin()));
    //Вывод результата
    cout << "Первый список: ";
    for (int x : m1) cout << x << " ";
    cout << "\n";
    cout << "Второй список: ";
    for (int x : m2) cout << x << " ";
    cout << "\n";
    cout << "Объединение: ";
    for (int x : ob) cout << x << " ";
    cout << "\n";
    cout << "Пересечение: ";
    for (int x : per) cout << x << " ";
    cout << "\n";
    cout << "Разность: ";
    for (int x : raz) cout << x << " ";
    cout << "\n";
    return 0;
}