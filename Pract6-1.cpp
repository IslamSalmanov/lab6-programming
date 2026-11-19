#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;
int main(){
    //Создает пустой массив
    vector<tuple<string, int, double>>st;
    //Запрашивает число студентов
    int k;
    cout << "Введите число студентов: ";
    cin >> k;
    cin.ignore();
    //Заполнение массива данными о студентах
    for(int i=0; i<k; ++i){
        cout << "Студент №" << i+1 << "\n";
        string n;
        cout << "Введите имя: ";
        getline(cin, n);
        int a;
        cout << "Введите возраст: ";
        cin >> a;
        double b;
        cout << "Введите балл: ";
        cin >> b;
        cin.ignore();
        st.push_back({n, a, b});
    }
    //Нахождение самого старшего
    auto ol=*max_element(st.begin(), st.end(), [](const auto& a, const auto& b){
        return get<1>(a)<get<1>(b);
    });
    cout << "Самый старший: " << get<0>(ol) << ", " << get<1>(ol)<<" лет" << "\n";
    //Нахождение самого высокого балла
    auto bb=*max_element(st.begin(), st.end(), [](const auto& a, const auto& b){
        return get<2>(a)<get<2>(b);
    });
    cout << "Лучший студент: " << get<0>(bb) << ", балл: " << get<2>(bb)<< "\n";
    //Нахождение среднего возраста
    auto sv=accumulate(st.begin(), st.end(), 0, [](int sum, const auto& s){
        return sum+get<1>(s);
    });
    cout<<fixed<<setprecision(1);
    cout << "Средний возраст: " << static_cast<double>(sv)/st.size() << "\n";
    //Сортировка по баллу
    sort(st.begin(), st.end(), [](const auto& a, const auto& b){
        return get<2>(a)>get<2>(b);
    });
    cout << "Сортировка по баллу: " << "\n";
    for(const auto& [n,a,b]:st){
        cout<<n<<": "<<b<<"\n";
    }
    return 0;
}