//a = p/(2 + 2k)
#include<iostream>

using namespace std;

int main(){
    int p,k,a;
    cin >> p >> k;
    a = p/(2.0 + 2.0 * k);
    cout << a * a * k;
}
