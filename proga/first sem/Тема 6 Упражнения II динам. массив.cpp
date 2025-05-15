#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int n;
    cout << "Введите длину масива";
    cin >> n;
    int *a = new int[n];
    int maxi = 0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        if (abs(maxi) < abs(a[i])){
                maxi = abs(a[i]);
        }
    }
    cout << maxi;
}
