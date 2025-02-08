#include<iostream>
#include<cmath>

using namespace std;

float F(float x){
    double pi = acos(-1.0);
    if (abs(x) < (pi/2)){
        return sin(x);
    }
    if (abs(x) >= (pi/2) && abs(x) <= pi){
        return cos(x);
    }
    return 0;
}

void F(float x, float & y){
    float pi = acos(-1.0);
    if (abs(x) < (pi/2)){
        y = sin(x);
    }
    if (abs(x) >= (pi/2) && abs(x) <= pi){
        y = cos(x);

    }
    if (abs(x) > pi){
        y = 0;
    }
}

int main(){
    float a,b,h,y;
    cout << "Введите интервал от а до b и шаг h\n";
    cin >> a >> b >> h;
    cout << "Обычная версия\n";
    for(float i = a; i <= b; i += h){
        cout << "F(" << i << ") = " << F(i) << '\n';
    }
    cout << "Перегруженная версия\n";
    for(float i = a; i <= b; i += h){
        F(i,y);
        cout << "F(" << i << ") = " << y << '\n';
    }
}
