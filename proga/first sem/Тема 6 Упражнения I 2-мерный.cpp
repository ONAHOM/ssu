#include<iostream>

using namespace std;

int main(){
    int n,m,x1,x2,summ = 0,c=1;
    cout << "Введите коллиство строк и столбцов двумерного массива (1 <= n,m <= 10)\n";
    cin >> n >> m;
    cout << "Введите интервал суммы\n";
    cin >> x1 >> x2;
    int mass[10][10];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cout << "mass[" << i << "][" << j << "] = ";
            cin >> mass[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (mass[i][j] <= x2 && mass[i][j] >= x1){
                summ += mass[i][j];
            }
        }
    }
    cout << summ;
    return 0;
}
    
