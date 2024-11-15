#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double ep, a, s;
    a = -0.25;
    s = 0;
    cin >> ep; 
    while (abs(a) >= ep) {
        s +=a;
        a *= -0.25;
    }
    cout << s;
}
