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

int fact(int n){
    if (n == 1){
        return n;
    }else if (n == 0){
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    int n;
    cin >> n;
    cout << fact(n);
}
