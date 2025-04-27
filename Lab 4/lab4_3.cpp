#include <iostream>
#include <string>
using namespace std;


class Car {
    private:
    string model;
    int year;
    float price;

    public:

    // Default constructor
    Car() {
       
    }


    // Function for showing the car number when car information is asked from the user
    void input(int carNumber){

        cin.ignore();
        cout << "Enter model for car: " << carNumber << ": ";
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
        cout << "\n";
    }

    // Destructor for each car
    ~Car() {
        cout << "Car Destructor: " << model << " " << "destroyed\n";
    }

    // Display function for each car
    void Display() const {
        cout << "Model: " <<  model << ", Year: " << year << ", price: $" << price << "\n";
    }

    // Function to display  constructor info for each car
    void ConstructorInfo() const {
        cout << "Car Constructor: " << model <<" (" << year << ") - " << "$" <<price <<"\n" ;
    }
};


class CarCollection {
    private:
    Car* cars; // Dynamic array of objects (cars)
    int size; // Number of cars in the collection

    public:
    // Constructor. Initializes pointer and size
    CarCollection() : cars(nullptr), size(0) {}


    // Loop trough every car to get user inputs
    void input() {
        cout << "How many cars do you want to enter? ";
        cin >> size;
 

        cars = new Car[size]; // Dynamic array of cars

        // For loop that calls input function and displays the car number
        for (int i = 0; i < size; i++) {
            cars[i].input(i + 1);
        }


    }

    // Function to display the car collection. This also calls the display function for each car.
    void displayCars() const {
        cout << "\n--- Car Collection ---\n";
        for (int i = 0; i < size; i++) {
            cars[i].Display();
        }
        cout << "\n";
    }

    // Function to display the constructor information. Loop trough each car and call the constructor info function
    void CarInfo() const {
        for (int i = 0; i < size; i++) {
            cars[i].ConstructorInfo();
        }
        cout << "CarCollection initialized with " << size << " cars.\n";
    }

// Destructor
    ~CarCollection() {
    delete[] cars;
    cout << "CarCollection destroyed\n";
            }
    
};

int main() {
    CarCollection* newcar = new CarCollection(); // Dynamically create collection

    // Call functions for objects and display info for cars
    newcar->input();
    newcar->CarInfo();
    newcar->displayCars();


    delete newcar; // Delete objects for memory cleanup.
    cout << "\n--- End of Program ---\n";
    return 0;
}
