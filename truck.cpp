#include <iostream>

using namespace std;
class Vehicle {
public:
    virtual void drive() {
        cout << "Driving a vehicle" << endl;
    }
};
class Car : public Vehicle {
public:
    void drive() override {
        cout << "Driving a car" << endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Driving a truck" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Truck();

    v1->drive();
	v2->drive(); 
    delete v1;
    delete v2;

    return 0;
}

