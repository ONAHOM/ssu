#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    long double s = 0, a = -0.5, ep;
    cout << "Введите eпcилон\n";
    int j = 1, k = 1;
    cin >> ep;
    for (long double i = 0.5; i < 1.6; i += 0.1){
        a = i - 1;
        while ((abs(a) + ep * 0.1) >= ep){
            s += a;
            j++;
            a *= -(i - 1) * (j-1) / j;
        }
        cout << k << '\t' << i << '\t' << fixed << setprecision(4) << s << "\t\t" << j - 1<< '\n' ;
        k++;
        s = 0;
        j = 1;
    }
}


    
