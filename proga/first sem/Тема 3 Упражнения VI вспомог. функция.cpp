#include<iostream>
#include<cmath>

using namespace std;

double f(double x){
    if (x < 3){
        return pow(x,2) - 0.3;
    }else if (x >= 3 && x <= 5){
        return 0;
    }else {
        return pow(x,2) + 1;
    }
}

int main(){
    double a, b, h;
    cin >> a >> b >> h;
    cout << "x\ty\n";
    for(double i = a; i <= b; i += h){
        cout << i << '\t' << f(i) << '\n';
    }
}
