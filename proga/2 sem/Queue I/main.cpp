#include<iostream>
#include<queue>
#include<fstream>

using namespace std;

int main(){
    queue<int> q;
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x, n;
    in >> x;
    while(in.peek() != EOF){
        in >> n;
        q.push(n);
    }
    while(!q.empty()){
        if(q.front() != x){
            out << q.front() << " ";
            q.pop();
        }
        else{
            q.pop();
        }
    }
}