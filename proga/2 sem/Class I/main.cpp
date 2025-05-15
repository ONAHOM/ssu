#include<iostream>
#include<string>

using namespace std;

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
            cout << "Имя владельца: " << owner.GetName() << endl;
            cout << "Фамилия владельца: " << owner.GetSurname() << endl;
            cout << "Отчество владельца: " << owner.GetPatronimic() << endl;
            cout << "Улица: " << address.GetStreet() << ", номер дома: " << address.GetNumber() << endl;
            cout << "Удаленность от ж/д: " << length << endl;
            cout << "-------------------\n";
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



int main(){
    Building b1;
    Building b2("Pyshkina", 9, "Polina", "Lava", "Olegovna", 40);
    cout << "Количество зданий " << b1.GetCount() << endl;
    Building b3;
    Building b4("Karaseva", 10, "Kirill", "Amogusov", "Petrovich", 40);
    cout << "Вывод полей\n";
    b1.show();
    b2.show();
    b3.show();
    b4.show();
    cout << "Операторы\n";
    cout << "b1 operator > " << (b1 > b2) << ' ' << (b1 > b3) << ' ' << (b1 > b4) << endl;
    cout << "b2 operator > " << (b2 > b1) << ' ' << (b2 > b3) << ' ' << (b2 > b4) << endl;
    cout << "b3 operator > " << (b3 > b1) << ' ' << (b3 > b2) << ' ' << (b3 > b4) << endl;
    cout << "b4 operator > " << (b4 > b1) << ' ' << (b4 > b2) << ' ' << (b4 > b3) << endl;
    cout << "--------------------\n";
    cout << "b1 operator < " << (b1 < b2) << ' ' << (b1 < b3) << ' ' << (b1 < b4) << endl;
    cout << "b2 operator < " << (b2 < b1) << ' ' << (b2 < b3) << ' ' << (b2 < b4) << endl;
    cout << "b3 operator < " << (b3 < b1) << ' ' << (b3 < b2) << ' ' << (b3 < b4) << endl;
    cout << "b4 operator < " << (b4 < b1) << ' ' << (b4 < b2) << ' ' << (b4 < b3) << endl;
    cout << "--------------------\n";
    cout << "b1 operator == " << (b1 == b2) << ' ' << (b1 == b3) << ' ' << (b1 == b4) << endl;
    cout << "b2 operator == " << (b2 == b1) << ' ' << (b2 == b3) << ' ' << (b2 == b4) << endl;
    cout << "b3 operator == " << (b3 == b1) << ' ' << (b3 == b2) << ' ' << (b3 == b4) << endl;
    cout << "b4 operator == " << (b4 == b1) << ' ' << (b4 == b2) << ' ' << (b4 == b3) << endl;
    cout << "Измение полей\n";
    b1.SetStreet("Gagarina");
    b1.SetNumber(49);
    b1.SetName("Petya");
    b1.SetSurname("Shist");
    b1.SetPatronimic("Ivanovich");
    b1.SetLength(10);
    b1.show();
    cout << "Количество зданий " << Building::GetCount();
}