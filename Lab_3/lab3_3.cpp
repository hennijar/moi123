#include <iostream>
using namespace std;

class Car{ 
    private: // Private attributes
    string brand;
    int year;

    public:
    Car(string x, int y){ // constructor with parameters
        brand = x;
        year = y;
        cout << "Car " << brand << " from " << year << " created.\n";
    }

    ~Car(){ //Destructor
        cout << "Car " << brand << " destroyed.\n"; 
    }

    void showinfo(){ // Function for displaying the brand and year.
        cout << "brand:\n"<< brand << "\nyear:\n" << year << "\n";
    }
};

int main(){
    Car myCar("Toyota", 2005); // Create new object to Car class.
    myCar.showinfo();
    return 0;
}

 
