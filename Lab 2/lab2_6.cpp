#include <iostream>
#include <string>
#include <vector>

struct Student { // Define structure first.
    std::string name;
    int id;
    float grade;
};

// Functions for different user inputs.
void addStudent(std::vector<Student>& students) {
    Student newStudent; 
    std::cout << "Enter student name: "; 
    std::cin >> newStudent.name; // Update structue.
    std::cout << "Enter student ID: ";
    std::cin >> newStudent.id;
    std::cout << "Enter student grade: ";
    std::cin >> newStudent.grade;
    students.push_back(newStudent); // New student records are added to the structure.
    std::cout << "Student added.\n";
}

void displayAll(const std::vector<Student>& students) {
    if (students.empty()) { // If there are no students (The vector is empty) on the structure, user is informed.
        std::cout << "No students to display.\n";
    } else {
        std::cout << "List of Students:\n"; 
        for (const auto& student : students) { // Loop trough each student in the students vector. Then print student records to user.
            std::cout << "Name: " << student.name << "\nID: " << student.id << "\nGrade: " << student.grade << "\n";
        }
    }
}

void searchByID(const std::vector<Student>& students, int id) {
    bool found = false; 
    for (const auto& student : students) { // Loop trough each student on the students vector.
        if (student.id == id) { // If the id is same as the user input id, print student records.
            std::cout << "Student found: " << student.name << ", ID: " << student.id << ", Grade: " << student.grade << "\n";
            found = true; 
            break; // Break when boolean found is true (Id is found).
        }
    }
    if (!found) { // If id is not found, inform user.
        std::cout << "Student with ID " << id << " not found.\n";
    }
}


int main(){ // Main program


char manage;
std::vector<Student> students; // Create vector for students.

do{ // 
std::cout << "Choose:\n(a) Add a student.\n(b) Display all students\n(c) Search for a student by ID.\n(d) Exit the program.\n" ;
std::cin>> manage; 

switch (manage) // Switch for choosing function call.
    {
    case 'a':
    addStudent(students);
    break;

    case 'b':
    displayAll(students);
    break;

    case 'c':
    int searchID;
    std::cout<<"Enter student ID\n";
    std::cin>>searchID;
    searchByID(students, searchID);
    break;

    case 'd':
    std::cout<< "Exit program.\n";
    break;
    }
} while (manage != 'd'); // If case d is not choosen, the loop will start again. If d is choosen, program loops only once ant the stops.

return 0;
}