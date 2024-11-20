#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n,m,summ = 0;
    cout << "Введите колличество строк и столбцов\n";
    cin >> n >> m;
    int **a = new int *[n];
    int *b = new int [n];
    for(int i = 0; i < n; i++){
        a[i] = new int [m];
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            summ += a[i][j];
        }
        b[i] = summ;
        summ = 0;
    }
    int maxi = b[0];
    for(int i = 1; i < n; i++){
        if (maxi < b[i]){
            maxi = b[i];
        }
    }
    cout << maxi;
}  
