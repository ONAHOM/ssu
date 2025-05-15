#include <fstream>
#include <iostream>

using namespace std;

int main(){
    ofstream out("1.dat", ios::binary);
    unsigned int n;
    cin >> n;
    int g;
    for (int i = 0; i < n; i++){
        cin >> g;
        out.write((char*) &g,sizeof(g));
    }
    out.close();
    ifstream in("1.dat", ios::binary);
    while (in.peek() != EOF)
    {
        int x;
        in.read((char*) &x, sizeof(x));
        if (x % 2 == 0){
            cout << x << '\n';
        }   
    }
    in.close();
    return 0;
}