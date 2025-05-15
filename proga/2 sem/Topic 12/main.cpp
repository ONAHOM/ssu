#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double eps = 1e-12;

class Point {
private:
    double x, y;
public:
    Point() : x(0), y(0) {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double x) { this->x = x; }
    void f() {
        try {
            if (x - 2 < eps) {
                throw "параметр в логарифме меньше или равен 0";
            }
            y = log(x - 2) / sqrt(5 * x + 1);
        }
        catch (const char* s) {
            throw s;
        }
    }
    void step(double h) {
        x += h;
    }
};

int main() {
    double a, b, h;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "h = ";
    cin >> h;

    Point p;
    cout << left << fixed << setprecision(5);
    cout << setw(10) << "x" << setw(20) << "y" << endl;

    for (p.setX(a); p.getX() <= b + eps; p.step(h)) {
        try {
            p.f();
            double x_out = (abs(p.getX()) < eps) ? 0.0 : p.getX();
            cout << setw(10) << x_out << setw(20) << p.getY() << endl;
        }
        catch (const char* s) {
            double x_out = (abs(p.getX()) < eps) ? 0.0 : p.getX();
            cout << setw(10) << x_out << s << endl;
        }
    }

    return 0;
}
