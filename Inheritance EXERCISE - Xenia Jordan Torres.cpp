// Inheritance EXERCISE - Xenia Jordan Torres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include <string>

using namespace std;

class Building {
protected:
    string name;
public:
    Building() {}; // Constructor per defecte

    Building(string n) : name(n) { }

    string getname()
    {
        return name;
    }
};

class Warehouse : public Building {
private:
    int wood, rock, wheat;

public:
    Warehouse(string n, int w, int r, int wh) : Building(n), wood(w), rock(r), wheat(wh) { }

    void printResources()
    {
        cout << "Name: " << getname() << endl;
        cout << "Wood: " << wood << endl;
        cout << "Rock: " << rock << endl;
        cout << "Wheat: " << wheat << endl;
    }
};

class House : public Building {
private:
    int floors, inhabitants, servants;

public:
    House(string n, int f, int i, int s) : Building(n), floors(f), inhabitants(i), servants(s) {}

    void printHouse()
    {
        cout << "Name: " << getname() << endl;
        cout << "Floors: " << floors << endl;
        cout << "Inhabitants: " << inhabitants << endl;
        cout << "Servants: " << servants << endl;
    }
};

class Temple : public Building {
private:
    string god;
    int priests;

public:
    Temple(string n, string g, int p) : Building(n), god(g), priests(p) {}

    void printTemple()
    {
        cout << "Name: " << getname() << endl;
        cout << "God: " << god << endl;
        cout << "Priests: " << priests << endl;
    }
};

int main()
{
    Warehouse warehouse("Central Warehouse", 100, 200, 300);
    House house("CITM", 4, 10, 2);
    Temple temple("Pertero", "Atena", 5);

    cout << "Warehouse Info:" << endl;
    warehouse.printResources();
    cout << endl;

    cout << "House Info:" << endl;
    house.printHouse();
    cout << endl;

    cout << "Temple Info:" << endl;
    temple.printTemple();
    cout << endl;
}
