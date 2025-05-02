#include<iostream>
#include<fstream>
#include<string>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct worker{
    string name, surname, patronymic,position;
    unsigned short yearOfBirth, yearOfEmployment, lengthOfService;
    double salary;
    void input();
    void output();
};

void worker::input(){
    in >> name >> surname >> patronymic >> yearOfBirth >> yearOfEmployment >> position >> lengthOfService >> salary;
}

void worker::output(){
    out << name << ' ' << surname << ' ' << patronymic << ' ' << yearOfBirth << ' ' << yearOfEmployment << ' ' << position << ' ' << lengthOfService << ' ' << salary << '\n';
}

int main(){
    unsigned short n;
    in >> n;
    out << n << '\n';
    worker *workers = new worker [n];
    for(int i = 0; i < n; i++){
        workers[i].input();
        if (workers[i].salary < 1200){
            workers[i].salary += 500;
        }
    }
    for(int i = 0; i < n; i++){
        workers[i].output();
    }
}