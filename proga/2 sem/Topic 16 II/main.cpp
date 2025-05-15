#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main() {
    ifstream in("in.txt");
    ofstream out("out.txt");
    vector<int> v;
    int n;
    while (in >> n)
    {
        v.push_back(n);
    }
    int newElement = 99;
    for (int i = 0; i < v.size();) {
        if (v[i] % 2 == 0) {
            v.insert(v.begin() + i, newElement);
            i += 2;
        } else {
            i++; 
        }
    }
    for (int num : v) {
        out << num << " ";
    }
    return 0;
}
