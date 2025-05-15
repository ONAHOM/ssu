#include <iostream>

using namespace std;


void del(int *mas, int& n, int k){
    for(int i = k; i < n - 1; ++i){
        mas[i] = mas[i+1];
    }
    n--;
}

int main(){
    int n;
    cout << "Введите длину массива";
    cin >> n;
    int *a = new int [n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                del(a,n,j);
                j--;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        cout << a[i] << ' ';
    }
}
