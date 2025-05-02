#include<iostream>
#include<cmath>

using namespace std;

void f(double x){
    if (((pow(x,3) - 1) >= 0) && ((pow(x,2) - 1) > 0)){
        cout << x << '\t' << sqrt(pow(x,3) - 1) / sqrt(pow(x,2) -1) << '\n';
} else {
    cout << x << "\tне определена\n";
}
}

int main(){
    double a, b, h;
    cin >> a >> b >> h;
    cout << "x\ty\n";
    for (a; a <= b; a += h){
        f(a);
    }
}

