#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //Запрос количества элемнтов массива
    int n;
    cout << "Введите число элементов: ";
    cin >> n;
    //Создание пустых векторов
    vector<int>m;
    vector<int>d;
    //Заполнение исходного вектора
    for(int i=0; i<n; ++i){
        int a;
        cout << "Введите элемент: ";
        cin >> a;
        m.push_back(a);
    }
    //Нахождение дубликатов
    for(int i=0; i<m.size(); ++i){
        bool Dup=false;
        for(int j=0; j<m.size(); ++j){
            if(i!=j && m[i]==m[j]){Dup=true; break;}
        }
        //Если дубликат не был добавлен, то добавить
        if(Dup && find(d.begin(), d.end(), m[i])==d.end()){d.push_back(m[i]);}
    }
    //Вывод результата
    if(d.size()>0){
        cout << "Дубликаты: ";
        for(int i=0; i<d.size(); ++i){cout << d[i] << " ";}
        cout << "\n";
    }
    else{cout << "Дубликатов нет" << "\n";}
    return 0;
}