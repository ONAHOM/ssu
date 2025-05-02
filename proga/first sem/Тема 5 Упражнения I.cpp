#include <iostream>

using namespace std;

int main(){
    int s = 0,n, a = -1;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        a *= -i;
        s += a;
    }
    cout << s;
}


