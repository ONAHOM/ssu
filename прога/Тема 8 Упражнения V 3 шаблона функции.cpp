#include<iostream>

using namespace std;

template <typename X> X **inputMas(X **mas,int& n, int& m){
    X x;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> x;
            mas[i][j] = x;
        }
    }
    return mas;
}


template <typename X> void printMass(X **mass, int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }
}


template <typename X> void arithmeticMean(X **mas, int n, int m){
    if (n != m){
        cout << "Ваша матрица не квадратная\n";
        return;
    }
    double arithmeticMean, counter;
    int g = 0;
    for (int i = (n - 2); i >= 0; i--){
        if (mas[i][g] != 0){
            arithmeticMean += mas[i][g];
            counter++;
        }
    g++;
    }
    cout << arithmeticMean / counter << '\n';
}


int main(){
    int n,m;
    cout << "Введите n и m для целочисленного массива\n";
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; i++){
        a[i] = new int [m];
    }
    cout << "Введите массив\n";
    inputMas(a,n,m);
    cout << "Ваш массив\n";
    printMass(a,n,m);
    cout << "Среднее арифметическое\n";
    arithmeticMean(a,n,m);
    int n1,m1;
    cout << "Введите n и m для вещественного массива\n";
    cout << "n = ";
    cin >> n1;
    cout << "m = ";
    cin >> m1;
    double **b = new double *[n1];
    for (int i = 0; i < n; i++){
        b[i] = new double [m1];
    }
    cout << "Введите массив\n";
    inputMas(b,n1,m1);
    cout << "Ваш массив\n";
    printMass(b,n1,m1);
    cout << "Среднее арифметическое\n";
    arithmeticMean(b,n1,m1);
}

            
