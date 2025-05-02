#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x;
    list<int> l;
    while (in.peek() != EOF)
    {
        in >> x;
        l.push_front(x);
    }
    for(list<int>::iterator it = l.begin(); it != l.end(); it++){
        out << *it << " ";
    }
}