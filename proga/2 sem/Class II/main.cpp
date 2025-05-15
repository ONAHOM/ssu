#include<iostream>
#include<string>

using namespace std;

class Unit{
    protected:
        double health;
        string name;
    public:
        Unit(): health(0), name("None") {}
        Unit(double health, string name): health(health), name(name) {}
        virtual void show(){
            cout << "Здоровье: " << health << '\n';
            cout << "Имя: " << name << '\n';
        }
        void SetHealth(double health){
            this->health = health;
        }
        void SetName(string name){
            this->name = name;
        }
        double GetHealth(){
            return health;
        }
        string GetName(){
            return name;
        }
};

class Solider: public Unit{
    private:
        double damage;
    public:
        Solider(): Unit(), damage(0) {}
        Solider(double health, string name, double damage): Unit(health, name), damage(damage) {}
        void show(){
            Unit::show();
            cout << "Урон: " << damage << '\n';
        }
        double GetDamage(){
            return damage;
        }
        void SetDamage(double damage){
            this->damage = damage;
        }
    
};

class Citizen: public Unit{
    private:
        string jobTitle;
    public:
        Citizen(): Unit(), jobTitle("None") {}
        Citizen(double health, string name, string jobTitle): Unit(health, name), jobTitle(jobTitle) {}
        void show(){
            Unit::show();
            cout << "Должность:" << jobTitle << '\n';
        }
        string GetJobTitle(){
            return jobTitle;
        }
        void SetJobTitle(string jobTitle){
            this->jobTitle = jobTitle;
        }
};

int main(){
    Unit *units[6];
    units[0] = new Solider;
    units[1] = new Citizen;
    units[2] = new Solider(100, "Yasper", 20);
    units[3] = new Citizen(100, "Yafa", "Programmer");
    units[4] = new Solider(70.4, "Piter", 40);
    units[5] = new Citizen(80, "Chupep", "student");
    for(int i = 0; i < 6; i++){
        units[i]->show();
        cout << "---------------- \n";
    }
}