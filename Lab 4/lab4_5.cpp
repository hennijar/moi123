#include <iostream>
#include <string>

using namespace std;

// Base class
class Car {
    private:
    string model;
    int year;
    float price;

    public:
    //Constructor
    Car(string m = " ", int y = 0, float p = 0.0f) : model(m), year(y), price(p) {}

    //Destructor
    virtual ~Car() {
        cout << "Destroying " << model <<" Car: " << model;
    }

    //void inputBasic()
    void inputBasic() {
        cin.ignore();
        cout << "\nEnter model: ";
        getline(cin, model);
        cout << "\nEnter year: ";
        cin >> year;
        cout << "\nEnter price: ";
        cin >> price;
    }

    //void displayBasic() const
    void displayBasic() const {
        cout << "\nModel: " << model << ", Year: " << year << ", Price: " << price;
    }
    
    // Input and display functions for overriding
    virtual void input() {}
    virtual void display() {}

};

// Derived class
class ElectricCar : public Car {
    private:
    float batterySize;


    public:

    // input
    void input() override {
        inputBasic();
        cout << "\nEnter battery size (kWh): ";
        cin >> batterySize;
    }
    
    //display
    void display() override {
        displayBasic();
        cout << ", Battery: " << batterySize << " kWh";
    }

};

//Derived class
class GasCar: public Car {
    private:
    float fuelCapacity;

    public:
    //input
    void input() override {
        inputBasic();
        cout << "\nEnter fuel capacity (L): ";
        cin >> fuelCapacity;
    }
    //display
    void display() override {
        displayBasic();
        cout << ", Fuel: " << fuelCapacity << " L";
    }

};

// Derived class
class HybridCar: public Car {
    private:
    float batterySize;
    float fuelCapacity;

    public:
    // input
    void input() override {
        inputBasic();
        cout << "\nEnter battery size: ";
        cin >> batterySize;
        cout << "\nEnter fuel capacity: ";
        cin >> fuelCapacity;
    }
    // display
    void display() override {
        displayBasic();
        cout << ", Battery: " << batterySize << ", Fuel: " << fuelCapacity;
    }

};

int main() {
    int choice;
    int size;

    cout << "Enter total number of cars: ";
    cin >> size;

    // Crete a dynamic array of Car pointers to store objects
    Car** car1 = new Car* [size];

    // Loop for getting information about each car
    for (int i = 0; i< size; i++) {
        while (true) {
        cout << "Car " << i+1 << " type:\n[1] Electric\n[2] Gasoline\n[3] Hybrid\n";
        cout << "Enter choice:\n";
        cin >> choice;

    
        
    
    // Create an object based on user's choice
    switch (choice) 
    {
        case 1:
        car1[i] = new ElectricCar();
        break;


        case 2:
        car1[i] = new GasCar();
        break;

        case 3:
        car1[i] = new HybridCar();
        break;

        default:
        cout << "Invalid value.\n";
        //car1[i] = nullptr;
        continue;
    }

    break;
}
    // If the object was creates successfully, call its input function.
    if (car1[i]) {
        car1[i]->input();
    }
 }

    // Display every car
    cout << "\n--- Fleet Information ---\n";
    for (int i = 0; i < size; i++) {
        if (car1[i]) {
            car1[i]->display();
        }

    }

    // Clean up dynamically allocated memory
    cout <<"\n\n--- Cleaning up Fleet ---\n\n";
    for (int i = 0; i < size; i++) {
        delete car1[i];
    }

    // Free the array
    delete[] car1;
    return 0;
}