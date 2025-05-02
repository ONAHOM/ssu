#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    cout << "Введите стрроку\n";
    getline(cin,a);
    a[0] = toupper(a[0]);
    for(int i = a.find(' '); i < a.length(); i++){
        if (a[i] == ' '){
            a[i+1] = toupper(a[i+1]);
        }
    }
    cout << a;
}
