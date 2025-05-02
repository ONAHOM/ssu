#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

class Address{
    private:
        string street;
        int number;
    public:
        Address(): street("None"), number(0) {}
        Address(string street, int number): street(street), number(number) {}
        void SetStreet(string temp){
            this->street = temp;               
        }
        void SetNumber(int number){
            this->number = number;
        }
        string GetStreet(){
            return street;
        }
        int GetNumber(){
            return number;
        }
};

class Owner{
    private:
        string name;
        string surname;
        string paronimic;
    public:
        Owner(): name("None"), surname("None"), paronimic("None") {}
        Owner(string name, string surname, string paronimic): name(name), surname(surname), paronimic(paronimic) {}
        void SetName(string name){
            this->name = name;
        }
        void SetSurname(string surname){
            this->surname = surname;
        }
        void SetPatronimic(string paronimic){
            this->paronimic = paronimic;
        }
        string GetName(){
            return name;
        }
        string GetSurname(){
            return surname;
        }
        string GetPatronimic(){
            return paronimic;
        }
};

class Building{
    private:
        Address address;
        Owner owner;
        double length;
        static int count;
    public:
        Building(): address(), owner(), length(0) {
            count++;
        }
        Building(string street, int number, string name, string surname, string paronimic, double length): address(street, number), owner(name, surname, paronimic), length(length) {
            count++;
        }
        Address GetAddress(){
            return address;
        }
        Owner GetOwner(){
            return owner;
        }
        double GetLength(){
            return length;
        }
        void SetLength(double length){
            if (length > 0){
                this->length = length;                
            }
        }
        void SetNumber(int number){
            this->address.SetNumber(number);
        }
        void SetStreet(string street){
            this->address.SetStreet(street);
        }
        void SetName(string name){
            this->owner.SetName(name);
        }
        void SetSurname(string surname){
            this->owner.SetSurname(surname);
        }
        void SetPatronimic(string paronimic){
            this->owner.SetPatronimic(paronimic);
        }
        static int GetCount(){
            return count;
        }
        
        void show(){
            out << "Имя владельца: " << owner.GetName() << endl;
            out << "Фамилия владельца: " << owner.GetSurname() << endl;
            out << "Отчество владельца: " << owner.GetPatronimic() << endl;
            out << "Улица: " << address.GetStreet() << ", номер дома: " << address.GetNumber() << endl;
            out << "Удаленность от ж/д: " << length << endl;
            out << "-------------------\n";
        }
        bool operator<(Building temp){
            if (this->length != temp.length){
                return this-> length < temp.length;
            }
            if (this->address.GetStreet() != temp.GetAddress().GetStreet()){
                return this->address.GetStreet() < temp.GetAddress().GetStreet();
            }
            return this->address.GetNumber() < temp.GetAddress().GetNumber();
        }
        bool operator>(Building temp){
            if (this->length != temp.length){
                return this-> length > temp.length;
            }
            if (this->address.GetStreet() != temp.GetAddress().GetStreet()){
                return this->address.GetStreet() > temp.GetAddress().GetStreet();
            }
            return this->address.GetNumber() > temp.GetAddress().GetNumber();
        }
        bool operator==(Building temp){
            if (this->length != temp.length){
                return false;
            }
            if (this->address.GetStreet() != temp.GetAddress().GetStreet()){
                return false;
            }
            if(this->address.GetNumber() != temp.GetAddress().GetNumber()){
                return false;
            }
            return true;
        }
};

int Building::count = 0;

bool compare(Building &a, Building &b)
{
    if (a.GetLength() != b.GetLength()){
        return a.GetLength() < b.GetLength();
    }
    if (a.GetAddress().GetStreet() != b.GetAddress().GetStreet()){
        return a.GetAddress().GetStreet() < b.GetAddress().GetStreet();
    }
    return a.GetAddress().GetNumber() < b.GetAddress().GetNumber();
}

int main(){
    vector<Building> buildings;
    string street, name, surname, paronimic;
    int number;
    double length;
    while(in.peek() != EOF){
        in >> street >> number >> name >> surname >> paronimic >> length;
        buildings.push_back(Building(street, number, name, surname, paronimic, length));
    }
    sort(buildings.begin(), buildings.end(), compare);
    for(auto b: buildings){
        b.show();
    }
}