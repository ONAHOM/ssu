#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    getline(cin,s1);
    s1 = s1.substr(s1.find(' ') + 1);
    if (s1.rfind(' ') < s1.length()){
        cout << s1.substr(0, s1.find(' '));
        return 0;
    cout << '\n';
    }
}
