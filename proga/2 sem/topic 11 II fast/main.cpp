#include<fstream>
#include<iostream>
#include<vector>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

void QuickSort(vector<int> &A, int L, int R){
    int i = L;
    int j = R;
    int piv = A[(i + j) / 2];
    while (i <= j)
    {
        while (A[i] > piv)
        {
            i++;
        }
        while (A[j] < piv)
        {
            j--;
        }
        if (i <= j){
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
    if (L < j)
    {
        QuickSort(A, L, j);
    }
    if (i < R)
    {
        QuickSort(A, i, R);
    }
}


void sort(int **matrix, int n){
    vector<int> v1;
    vector<int> v2;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                v1.push_back(matrix[j][i]);
            }
        }
        QuickSort(v1, 0, v1.size() - 1);
        for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                matrix[j][i] = v1[j];
            }
        }
        v1.clear();
    }
}

void print(int** matrix, int rows, ofstream& out) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            out << matrix[i][j] << " ";
        }
        out << '\n';
    }
}

int main(){
    int n,temp;
    in >> n;
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            in >> matrix[i][j];
        }
    }
    sort(matrix, n);
    print(matrix, n, out);
}