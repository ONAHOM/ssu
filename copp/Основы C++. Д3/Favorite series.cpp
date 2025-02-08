#include <cstdlib>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int x,y,a,b;
    cin >> x >> y;
    if (x > y){
        a = x - y;
        b = 7 - x + y;
    }
    else{
        a = y - x;
        b = 7 - y + x;
    }
    if (a > b){
        cout << b << ' ' << a;
    }else {
        cout << a << ' ' << b;
    }
}
