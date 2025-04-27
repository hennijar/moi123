#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear the newline character left in the input buffer after cin

    cout << "Enter your full name: ";
    getline(cin, name); // Read full name (can read also spaces)

    cout << "Age: " <<age << ", Name: " << name << endl;
}