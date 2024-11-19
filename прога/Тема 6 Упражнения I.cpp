#include <iostream>

using namespace std;

int main(){
    int a, b, s = 0, n;
    cout << "введите длину масива\n";
    cin >> n;
    cout << "Введите прожуток суммы для маcива\n";
    cin >> a >> b;
    cout << "Введите прожуток суммы для маcива\n";
    a -= 1;
    b -= 1;
    int v[20];
    for (int i = 0; i < n;++i){
        cin >> v[i];
    }
    for (int i = a; i <= b; i++){
        s += v[i];
    }
    cout << s;
}

