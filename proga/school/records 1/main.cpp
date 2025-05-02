#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

struct date{
    short day, month, year;
    void input();
    void output();
};

void date::input(){
    char c;
    in >> day >> c >> month >> c >> year;
}

void date::output(){
    out << setw(2) << setfill('0') << day << '/' << setw(2) << setfill('0') << month << '/' << setw(4) << setfill('0') << year;
}

bool IsLeap(int year)
{
    return (year%400==0)||((year%4==0)&&(year%100!=0));
}


int main(){
    date d1;
    d1.input();
    if (d1.day != 1){
        d1.day--;
    }else if(d1.month != 1){
        switch (d1.month)
        {
        case 3:
            if (IsLeap){
                d1.day = 29;
                d1.month--;
                break;
            }
            d1.day = 28;
            d1.month--;
            break;
        case 5:
            d1.day = 30;
            d1.month--;
            break;
        case 7:
            d1.day = 30;
            d1.month--;
            break;
        case 10:
            d1.day = 30;
            d1.month--;
            break;
        case 12:
            d1.day = 30;
            d1.month--;
            break;
        default:
            d1.day = 31;
            d1.month--;
            break;
        }
    }else{
        d1.day = 31;
        d1.month = 12;
        d1.year--;
    }
    d1.output();
}