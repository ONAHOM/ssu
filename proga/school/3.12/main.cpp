#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    if(!in){
        cout << "ERROR";
        return 0;
    }
    unsigned int l;
    string s;
    in >> l;
    while(getline(in,s)){
        if(s.length() == l){
            out << s << '\n';
        }
    }
    return 0;

}