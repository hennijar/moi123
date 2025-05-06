#include <iostream>
#include <vector>
#include <fstream> //This library handles CSV files
using namespace std;

//Function for adding new expense to existing amount
void addExpense(vector<double>& Category, const string& name) {
    double Amount;
    cout << "Enter " << name << " expense: ";
    cin >> Amount;
    Category.push_back(Amount); // Add the amount to vector
}

// Function for calculating total either from one category or from all categories
double total(const vector<double>& Category) {
    double Total = 0.0;
    for (double Amount : Category) { // Loop trough amounts and add them to total
        Total = Total + Amount;
    }
    return Total; // Return the total amount
}

/*Function for exporting information to a CSV file.
The CSV file will be saved in the same folder as this program.*/ 
void exportToCSV(const vector<double>& food,
const vector<double>& transport, 
const vector<double>& utilities) {
    ofstream file("budget.csv"); // Create and open file for writing
    file << "Category,Amount\n"; // Write the first row

    // Write each expense to its category
    for (double Amount : food) file << "Food, " << Amount << "\n";
    for (double Amount : transport) file << "Transport, "<< Amount << "\n";
    for (double Amount : utilities) file << "Utilities, " << Amount << "\n";

    file.close(); //Close the file
    cout << "Exported succesfully to budget.csv\n";

}

int main() {
    // Vectors to store expenses for each category
    vector<double> food, transport, utilities;
    int choice;

    do { // Return to beginning unless user chooses 6 (Exiting the program)
        // Display menu
        cout << "\n1. Add Food Expenses\n2. Add Transport Expenses\n3. Add Utilities Expenses\n4. Show Total\n5. Export to CSV\n6. Exit\n";
        cin >> choice;

        // Choose right case based on users choice
        switch (choice) {
            case 1:
            addExpense(food, "Food");
            break;

            case 2:
            addExpense(transport, "Transport");
            break;

            case 3:
            addExpense(utilities, "Utilities");
            break;

            case 4:
            cout << "Total Food Expenses: " << total(food) << " €\n";
            cout << "Total Transport Expenses: " << total(transport) << " €\n";
            cout << "Total Utilities Expenses: " << total(utilities) << " €\n";
            cout << "Overall Total: " << total(food) + total(transport) + total(utilities) << " €\n";
            break;

            case 5:
            // Export data to CSV file
            exportToCSV(food, transport, utilities);
            break;

            case 6:
            // Exit message displayed to user
            cout << "You have exit the program.\n";
            break;

            default:
            // Handle invalid user inputs
            cout << "Invalid choice.\n";

        }

    }
    while (choice != 6); // If 6 is chosen, exit the loop

    return 0; // End of program
}