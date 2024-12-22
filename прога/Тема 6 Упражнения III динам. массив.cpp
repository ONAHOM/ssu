#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Введите n для массива\n";
    cout << "n = ";
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++){
        a[i] = new int [n];
    }
    cout << "Введите массив\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    cout << "Ваш массив\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    cout << "Среднее арифметическое\n";
    double arithmeticMean = 0, counter = 0;
    for (int i = 0; i < (n - 1); i++){
        for(int j = 0; j < n - (i + 1);j++){
            if (a[i][j] != 0){
                arithmeticMean += a[i][j];
                counter++;
            }
        }
    }
    cout << arithmeticMean / counter << '\n';
}

