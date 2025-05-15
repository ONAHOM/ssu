#include<iostream>

using namespace std;

void insert(int **a,int &n,int m,int k){
    for(int i = n; i > k;i--){
        a[i] = a[i-1];
    }
    ++n;
    a[k] = new int [m];
    for(int j = 0; j < m; j++){
        a[k][j] = 0;
    }
}

int main(){
    int n,m,k;
    cout << "введите n и m\n";
    cin >> n >> m;
    int **a = new int *[2 * n];
    for(int i = 0; i < n;i++){
        a[i] = new int [m];
    }
    for(int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    int counter =0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            if (a[i][j] == 0){
                counter++;
                break;
            }
        }
        if (counter == 0){
            insert(a,n,m,i+1);
            i++;
        }
        counter = 0;
    }
    cout << "\n\n";
    for(int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
