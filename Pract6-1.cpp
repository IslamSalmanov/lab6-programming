#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //Запрос количества элементов списка
    int n;
    cout << "Введите число элементов: ";
    cin >> n;
    //Проверка на ввод числа
    if(!cin){cout << "Это не число" << "\n"; return 0;}
    //Создание пустого списка
    vector<int>m;
    //Заполнение списка
    for(int i=0; i<n; ++i){
        cout << "Элемент " << i+1 <<"\n";
        int a;
        cout << "Введите элемент: ";
        cin >> a;
        //Проверка на ввод числа
        if(!cin){cout << "Это не число" << "\n"; return 0;}
        m.push_back(a);
    }
    //Копирование списка и его сортировка
    vector<int>b=m;
    sort(begin(b), end(b));
    //Проверка является ли отсортированным
    if(b==m){cout << "Список отсоритрован" << "\n"; return 0;}
    else{cout << "Список не сортирован" << "\n"; return 0;}
}