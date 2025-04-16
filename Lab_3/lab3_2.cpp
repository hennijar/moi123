#include <iostream>
using namespace std;

class Student {
    private: // Private attributes

    string name;
    int age;
    char grade;
    string group = "2025 group";

    public:

    // Setters for setting value to a private attribute.
    void setName(string n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
    void setGrade(char g){
        grade = g;
    }

    // Getters for returning the values for user.
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    char getGrade(){
        return grade;
    }

    // Function for printing the values for user.
    void displayinfo(){
        cout << "Name: " << getName() << "\n";
        cout << "Age :" << getAge() << "\n";
        cout << "Grade: " << getGrade() << "\n";
    
    }

};



int main(){
    Student student1; // Student object for one student.
    // Set values for that student.
    student1.setName("Janne");
    student1.setAge(17);
    student1.setGrade('5');

    student1.displayinfo(); // Call this function for printing the values.
    
    return 0;
}

