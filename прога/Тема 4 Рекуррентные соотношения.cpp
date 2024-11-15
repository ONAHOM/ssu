#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double b1 = 0.5, b2 = 0.2, b;
    int n;
    cout << "n = ";
    cin >> n;
    cout << "b1: " << b1 << '\n';
    cout << "b2: " << b2 << '\n';
    for (int i = 3; i <= n; i++){
        b = pow(b2,2) + (b1 / i);
        b1 = b2;
        b2 = b;
        cout << 'b' << i  << ": " << b << '\n';
    }
}
