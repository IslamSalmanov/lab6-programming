#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Создание матрицы
    vector<vector<int>>mat={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows=mat.size();
    int cols=mat[0].size();
    //Транспонирование
    vector<vector<int>>tr(cols, vector<int>(rows));
    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols; ++j){
            tr[j][i]=mat[i][j];
        }
    }
    //Вывод исходной матрицы
    cout << "Исходная матрица:" << "\n";
    for(const auto& row:mat){
        for(int x:row) cout << x << " ";
        cout << "\n";
    }
    //Вывод транспонированное матрицы
    cout << "Транспонированная матрица:" << "\n";
    for(const auto& row:tr){
        for(int x:row) cout << x << " ";
        cout << "\n";
    }
    return 0;
}