#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

int a,b;

bool inTheInterval(int c){
    return a <= c && c <= b;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    cin >> a >> b;
    vector<int> v;
    while(in >> n){
        v.push_back(n);
    }
    replace_if(v.begin(),v.end(), inTheInterval,0);
    for(auto it = v.begin(); it != v.end(); it++){
        out << *it << ' ';
    }
    return 0;
}
