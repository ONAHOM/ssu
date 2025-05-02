#include <fstream>
#include <iostream>
#include <string>

using namespace std;

main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    if (!in){
        cout << "error";
        return 0;
    }
    unsigned int x;
    cin >> x;
    string s,s1;
    while (getline(in,s)){
        out << s[x];
    }
    in.close();
    out.close();
}