#include <iostream>

using namespace std;

int main(){
    double s = 0, x,a;
    int n;
    cout << "Введите x и n\n";
    cin >> x >> n;
    a = x;
    s += a;
    x = x * x;
    for(int i = 2; i <= n;++i){
        a *= -(x/(4 * i * i - 6 * i + 2));
        s += a;
    }
    cout << s;
}
