#include <iostream>
using namespace std;

class Vehicle { // Base class

    protected: 
    string brand;
    int year;

    // Constructor
    public:
    Vehicle(string x, int y){ 
        brand = x;
        year = y;
        
    }

    // Destructor, because while using new, destructor is not created automatically by C++.
    virtual ~Vehicle(){ 

    }

    // Functions than can be overridden from derived classes
    virtual void showInfo(){ 
        cout << "Brand: " << brand << "\nyear: " << year << "\n";
    }

    virtual void startEngine(){
        cout << "Starting engine of " << brand << ".\n\n\n";
    }

};

class Car: public Vehicle { // Derived class
    private:
    int numDoors;

    public:

    Car(string x, int y, int z): Vehicle(x, y) {  // Constructor 
        numDoors = z;
    }

    // Override functions
    void showInfo() override { 
        cout << "Brand: " << brand << "\nyear: " << year << "\n" << "Number of doors: " << numDoors << "\n";
    }

    void startEngine() override {
        cout << brand << " engine is starting!\n\n\n";
    }

    // Getter functions to access private attribute
    int getnumDoors() const {
        return numDoors;
    }
};

class ElectricCar: public Car { // Derived class from class car
    private:
    int batteryCapacity;

    public:
    ElectricCar(): Car("Default", 0, 0) { // Default constructor
    batteryCapacity = 0;
    }

    ElectricCar(string x, int y, int z, int c): Car(x, y, z) { // Parameterized constructor: Takes all attributes
        batteryCapacity = c;
    }

    // Override functions
    void showInfo() override {
        cout << "Brand: " << brand << "\nyear: " << year 
        << "\nNumber of doors: " << getnumDoors()
        << "\nBattery capacity: " << batteryCapacity << " kWh\n";
    }

    void startEngine() override {
        cout << "Electric engine is starting... Silent but powerful!\n\n\n";
    }

};

int main(){
    Vehicle* v1 = new Vehicle("Nissan", 2008); // Define new object.
    v1->showInfo(); // Call function to display brand and year.
    v1->startEngine(); // Call function for displaying engine start.

    Car* c1 = new Car("Peugeot", 2008, 2); // New object to derived Car class.
    c1->showInfo();
    c1->startEngine();

    ElectricCar* e1 = new ElectricCar("Nissan", 2022, 4, 40); // New object to derived electirc car class.
    e1->showInfo();
    e1->startEngine();

    ElectricCar* e2 = new ElectricCar(); // New object with default parameters
    e2->showInfo();
    e2->startEngine();

    // Delete objects 
    delete v1;
    delete c1;
    delete e1;
    delete e2;

    return 0;
   
}