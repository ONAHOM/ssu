#include<iostream>
#include<cmath>
#include <ostream>
using namespace std;

double f(double x1, double y1, double x2, double y2){
   return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
}

bool t(double a, double b, double c){
    return !(a + b > c && a + c > b && b + c > a);
}

int main(){
    double x1,x2,x3,y1,y2,y3;
    cout << "Введите первую точку(x, y) ";
    cin >> x1 >> y2;
    cout << "Введите вторую точку(x, y) ";
    cin >> x2 >> y2;
    cout << "Введите третью точку(x, y) ";
    cin >> x3 >> y3;
    double l1 = f(x1,y1,x2,y2);
    double l2 = f(x1,y1,x3,y3);
    double l3 = f(x2,y2,x3, y3);
    if (t(l1,l2,l3)){
        cout << 'Y' << '\n';
    }else {
        cout << 'N';
    }
    return 0;
}
