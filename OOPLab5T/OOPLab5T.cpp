// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <string>

using namespace std;

// Ваші файли загловки 
//
#include "Lab5Exmaple.h"

// #1
class Liquid {
protected:
    string name;
    double density;

public:
    Liquid(string _name, double _density) : name(_name), density(_density) {}
    Liquid() : name(""), density(0.0) {}


    ~Liquid() {}


    void print() {
        cout << "Liquid: " << name << ", Density: " << density << endl;
    }


    void setDensity(double _density) {
        density = _density;
    }
};


class AlcoholicLiquid : public Liquid {
private:
    double strength;

public:

    AlcoholicLiquid(string _name, double _density, double _strength) : Liquid(_name, _density), strength(_strength) {}

    AlcoholicLiquid() : Liquid(), strength(0.0) {}


    ~AlcoholicLiquid() {}


    void print() {
        cout << "Alcoholic Liquid: " << name << ", Density: " << density << ", Strength: " << strength << "%" << endl;
    }


    void setStrength(double _strength) {
        strength = _strength;
    }
};

// #2
class Wheel {
private:
    int diameter;

public:
    Wheel(int _diameter) : diameter(_diameter) {}

    Wheel() : diameter(0) {}

    ~Wheel() {}
};

class Bicycle {
private:
    Wheel frontWheel;
    Wheel rearWheel;

public:
    Bicycle(int frontDiameter, int rearDiameter) : frontWheel(frontDiameter), rearWheel(rearDiameter) {}


    ~Bicycle() {}
};

class Car {
private:
    Wheel wheels[4];

public:
    Car(int frontLeftDiameter, int frontRightDiameter, int rearLeftDiameter, int rearRightDiameter) {
        wheels[0] = Wheel(frontLeftDiameter);
        wheels[1] = Wheel(frontRightDiameter);
        wheels[2] = Wheel(rearLeftDiameter);
        wheels[3] = Wheel(rearRightDiameter);
    }


    ~Car() {}

int main()
{
    std::cout << " Lab #5  !\n";

    // #1
    Liquid beer("Пиво", 0.98);
    AlcoholicLiquid wine("Біле вино", 0.95, 12.5);

    beer.print();
    wine.print();


    beer.setDensity(1.01);
    wine.setStrength(13.0);

    cout << "\nUpdated data:" << endl;
    beer.print();
    wine.print();

    // #2
    Bicycle bike(26, 26);
    Car car(18, 18, 18, 18);

}
