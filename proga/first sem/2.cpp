#include <iostream>
#include <cmath>

using namespace std;
int main(){
    unsigned short a, c, i;
    i = 1;
    cin >> a >> c;
    while(i <= a){
        if (a % i == 0 && i % c == 0){
            cout << i << ' ';
        }
        ++i;
    }
}
