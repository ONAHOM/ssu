#include<iostream>
#include<cmath>
using namespace std;


int gcd(int a, int b){
    int a1 = max(a,b);
    int b1 = min(a,b);
    int p;
    while (a1 % b1 != 0){
        p = b1;
        b1 = a1 % b1;
        a1 = p;
    }
    return b1;
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << abs(n * m) / gcd(n,m);
}
