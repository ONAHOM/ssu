#include "Queue.cpp"
#include <fstream>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    Queue<int> q,q1;
    int n;
    while(in >> n) {
        q.Put(n);
    }
    while(!q.Empty()){
        n = q.Get();
        if (n < 0){
            q1.Put(n);
        }
    }
    n = 0;
    while(!q1.Empty()){
        n++;
        out << q1.Get() << ' ';
    }
    out << endl <<  n;
    q1.Get();
    in.close();
    out.close();
    return 0;
}