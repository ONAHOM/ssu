#include<stack>
#include<fstream>
#include<iostream>

using namespace std;

int main(){
    stack<int> st;
    stack<int> st2;
    ifstream in("input.txt");
    ofstream out("output.txt");
    int x, n;
    in >> x;
    while(in.peek() != EOF){
        in >> n;
        st.push(n);
    }
    while(st.empty() != true)
    {
        if(st.top() != x){
            st2.push(st.top());
            st.pop();
        }
        else{
            st.pop();
        }
    }
    while(!st2.empty()){
        out << st2.top() << ' ';
        st2.pop();
    }   
}