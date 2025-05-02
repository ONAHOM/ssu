#include<string>
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct student{
    string name, surname, patronymic;
    unsigned short groupNumber, yearOfBirthday;
    vector<unsigned short> marks;
    void input();
    void output();
};

void student::input(){
    in >> groupNumber >> surname >> name >> patronymic >> yearOfBirthday;
    unsigned short temp;
    for (int i = 0; i < 5; i++)
    {
        in >> temp;
        marks.push_back(temp);
    }
    
}

void student::output(){
    out << groupNumber << ' ' << surname << ' ' << name << ' ' << patronymic << ' ' << yearOfBirthday << ' ';
    for(auto it = marks.begin(); it < marks.end(); it++){
        out << *it << ' ';
    }
    out << '\n';
}


bool compareStudents(const student& a, const student& b) {
    if (a.surname != b.surname)
        return a.surname < b.surname;
    if (a.name != b.name)
        return a.name < b.name;
    if (a.patronymic != b.patronymic)
        return a.patronymic < b.patronymic;
    return a.yearOfBirthday < b.yearOfBirthday;
}

void sort(student *a, int n){
    for (int i = 1; i < n; i++){
        int j = i;
        while(j>0 && compareStudents(a[j],a[j-1])){
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int main(){
    student *students = new student[50];
    int count = 0;
    while(in.peek() != EOF){
        students[count].input();
        count++;
    }
    sort(students,count);
    for(int i = 0; i < count; i++){
        students[i].output();
    }
}