#include <iostream>

using namespace std;

int main(){
    int a, b, s = 0, n;
    cout << "введите длину масива\n";
    cin >> n;
    cout << "Введите прожуток суммы для маcива\n";
    cin >> a >> b;
    int v[20];
    cout << "Введите маcив длинной "<< n << '\n';
    for (int i = 0; i < n;++i){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++){
        if (a <= v[i] && b >= v[i]){
            s += v[i];
        }
    }
    cout << s;
}

