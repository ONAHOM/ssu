#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ifstream in1("input1.txt");
    ifstream in2("input2.txt");
    ofstream out("output.txt");
    int x;
    while(in1 >> x){
        if(x > 0){
            out << x << ' ';
        }
    }
    out << '\n';
    while(in2 >> x){
        if(x < 0){
            out << x << ' ';
        }
    }
    in1.close();
    in2.close();
    out.close();
}