#include<fstream>
#include<iostream>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

void sortDescending(int *matrix, int n){
    int lowIndex;
    for (int i  = 0; i < n - 1; i++){
        lowIndex = i;
        for(int j = i + 1; j < n;j++){
            if (matrix[j] < matrix[lowIndex]){
                lowIndex = j;
            }
        }
        swap(matrix[i],matrix[lowIndex]);
    }
}

void sortAscending(int *matrix, int n){
    int lowIndex;
    for (int i  = 0; i < n - 1; i++){
        lowIndex = i;
        for(int j = i + 1; j < n;j++){
            if (matrix[j] > matrix[lowIndex]){
                lowIndex = j;
            }
        }
        swap(matrix[i],matrix[lowIndex]);
    }
}

void sortDiagonals(int** matrix, int n) {
    int *diag = new int[n];
    for(int i = 1; i < n;i++){
        for(int j = 0; j < n - i; j++){
            diag[j]  = matrix[i + j][j];
        }
        sortDescending(diag, n - i);
        for(int j = 0; j < n - i; j++){
            matrix[i + j][j] = diag[j];
        }
    }
    for(int i = 1; i < n;i++){
        for(int j = 0; j < n - i; j++){
            diag[j]  = matrix[j][i + j];
        }
        sortAscending(diag, n - i);
        for(int j = 0; j < n - i; j++){
            matrix[j][i + j] = diag[j];
        }
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
    sortDiagonals(matrix, n);
    print(matrix, n, out);
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    in.close();
    out.close();

}