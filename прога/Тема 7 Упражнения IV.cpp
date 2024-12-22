#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int curent = 1, mCount = 0;
    cin >> s;
    for (int i = 0; i < (s.length() - 1); i++){
        if (s[i] == s[i+1]){
            curent++;
        }else if (curent > mCount){
            mCount  = curent;
            curent = 1;
        }
    }
    if (curent > mCount){
        mCount = curent;
    }
    cout << mCount;
}
