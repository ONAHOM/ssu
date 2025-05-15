#include<iostream>

using namespace std;

template <typename X> X **crateMas(int& n){
    cout << "Введите n для массива\n";
    cout << "n = ";
    cin >> n;
    X **a = new X *[n];
    for (int i = 0; i < n; i++){
        a[i] = new X [n];
    }
    cout << "Введите массив\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    return a;
}


template <typename X> void printMass(X **mass, int n){
    cout << "Ваш массив\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mass[i][j] << ' ';
        }
        cout << '\n';
    }
}


template <typename X> void arithmeticMean(X **mas, int n){
    cout << "Среднее арифметическое\n";
    double arithmeticMean = 0, counter = 0;
    for (int i = 0; i < (n - 1); i++){
        for(int j = 0; j < n - (i + 1);j++){
            if (mas[i][j] != 0){
                arithmeticMean += mas[i][j];
                counter++;
            }
        }
    }
    cout << arithmeticMean / counter << '\n';
}


int main(){
    int n,n1;
    int **a = crateMas<int>(n);
    printMass(a,n);
    arithmeticMean(a,n);
    double **b = crateMas<double>(n1);
    printMass(b,n1);
    arithmeticMean(b,n1);
}

            
