#include <cstddef>
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<char> e(t);
    for (int i = 0; i < t; ++i){
        int n,op;
        char g;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        
        for (int j = 0; j < n; ++j){
            cin >> a[j];
        }
        for (int j = 0; j < n; ++j){
            cin >> op;
            b[j] = abs(a[j] - op);
            if (!(j == 0 ||(b[j-1] == b[j]) || (op == 0 && b[j] <= b[j]))){
                g = 'n';
                break;
            }
        }
        if (g != 'n'){
            e[i] = 'y';
        }else {
            e[i] = 'n';
        }
    }

    for (int j = 0; j < t; ++j){
        if (e[j] == 'y'){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

}
        
