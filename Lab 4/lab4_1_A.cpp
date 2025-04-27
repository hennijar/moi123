#include <iostream>
using namespace std;

class Complex {

    private:
    float a; // Real part
    float b; // Imaginary part

    public:
    Complex(float real = 0, float imag = 0){ // Constructor
        a = real;
        b = imag;
    }

    // Overloading the operator to add two numbers
    Complex operator+(const Complex& other) const{
        return Complex(a + other.a, b + other.b);
    }

    // Overloading the operator to substract two numbers
    Complex operator-(const Complex& other) const{
        return Complex(a - other.a, b - other.b);
    }

    // Overloading the operator to divide two numbers
    Complex operator/(const Complex& other) const{
        float denominator = other.a * other.a + other.b * other.b;
        float real = (a *other.a + b * other.b);
        float img = (b * other.a - a * other.b);
        return Complex(real/denominator, img/denominator);
    }

    // Ostream& = return type
    // operator<< == operator being overloaded
    // Ostream& out = the output stream
    // const Complex& c = object that is printed out

    // Friend function to override << operator.
    friend ostream& operator<<(ostream& out, const Complex& c);


};

// Overloding the operator to print complex number in form of a + bi
ostream& operator<<(ostream& out, const Complex& c){
    out << c.a;
    if (c.b >= 0){ // Defining the sign of imaginary part
        out << " + " << c.b << "i";
    }
    else {
        out << " - " << -c.b << "i";
    }
    return out;

}


int main(){
    // Take user input and display results
    Complex c1(4, 5), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;
    return 0;
}

