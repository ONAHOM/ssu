#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    if (!in){
        cout << "Error!";
        return 0;
    }
    string s;

    while (getline(in,s)){
        if (s.find(' ') != string::npos){
            out << s << '\n';
        }
    }
    return 0;
}