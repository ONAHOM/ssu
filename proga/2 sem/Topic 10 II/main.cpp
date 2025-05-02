#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct worker
{
    string surname, name, patronymic, jobTitle;
    unsigned int year, salary, experience;
    void input();
    void output();
};

void worker::input(){
    in >> surname >> name >> patronymic >> year >> jobTitle >> salary >> experience;
}

void worker::output(){
    out << surname << ' ' << name << ' ' << patronymic << ' ' << year << ' ' << jobTitle << ' ' << salary << ' ' << experience << '\n';
}

int main(){
    unsigned int year;
    worker w;
    cout << "Введите текущий год\n";
    cin >> year;
    while (in.peek() != EOF)
    {
        w.input();
        if(w.year != year){
            w.output();
        }
    }
    out.close();
    in.close();
    return 0;
}