#include<iostream>
#include<string>

using namespace std;

string palindrome(string s){
    if (s.length() == 0){
        string s1 = "Палиндром";
        return s1;
    }
    if (s.length() == 1){
        string s1 = "Палиндром";
        return s1;
    }
    if (s[0] == s[s.length()-1]){
        return palindrome(s.substr(1,s.length() - 2));
    }
    string s1 = "не палиндром";
    return s1;
}



int main(){
    string g;
    getline(cin,g);
    cout << palindrome(g);
}
