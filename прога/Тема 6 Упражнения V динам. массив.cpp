#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int *a = new int [n];
    for(int i = 0; i < 5; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < 5; ++i){
        cout << a[i] << '\n';
    }
    int k = 2;
    for(int i = k; i < 5; ++i){
        a[i] = a[i+1];
        n--;
    }
    for(int i = 0; i < n-1; ++i){
        cout << a[i] << '\n';
    }
}
