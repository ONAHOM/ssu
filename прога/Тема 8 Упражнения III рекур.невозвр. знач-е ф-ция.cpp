#include <iostream>
 
using namespace std;
 
void divisors(int n) {
    static int divisor = 1;
    if (n < divisor) {
        divisor = 1;
        return;
    } else if (n % divisor == 0) {
        cout << divisor << " ";
        divisor++;
        divisors(n);
    } else {
        divisor++;
        divisors(n);
    }
}
 
int main() {
    int n;
    cin >> n;
    cout << "Его делители:\n";
    divisors(n);
}
