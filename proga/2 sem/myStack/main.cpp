#include "Stack.cpp"
#include <fstream>

using namespace std;


int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    Stack<int> st, st1;
    int n;
    while(in.peek() != EOF){
        in >> n;
        st.Push(n);
    }
    n = 0;
    while(!st.Empty()){
        if(st.Top() < 0){
            st1.Push(st.Top());
        }
        st.Pop();
    }
    while(!st1.Empty()){
        out << st1.Top() << " ";
        n++;
        st1.Pop();
    }
    out << endl << n;
    st.Top();
    st.Pop();
    in.close();
    out.close();
}