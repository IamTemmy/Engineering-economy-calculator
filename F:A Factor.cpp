//this file is to calculate the F/A and A/F factor of a given problem.
//in this code, we can only have either A or P as the only missing variables
//Generating a formula to find i and n would be complex, can be done, but in the future

#include <iostream>
#include <cmath>

using namespace std;

//F = Future Worth
//P = Present Worth
//A = Annual Worth
//i = interest rate per time period
//n = number periods/years, months, days
//t = time/years, months, days

int main()
{
    double A;
    double F;
    double i;
    double n;
    char missingVariable;
    
    // Prompt for missing variable
    cout << "Which variable do you want to find? (A or F): ";
    cin >> missingVariable;

    if (missingVariable == 'A') {
        cout << "Enter Future Worth (F): ";
        cin >> F;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate A using the formula
        A = F * i / ((pow(1 + i, n) - 1));
        cout << "Annual Worth (A) = " << A << endl;
        
    } else if (missingVariable == 'F') {
        cout << "Enter Annual Worth (A): ";
        cin >> A;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate P using the formula
        F = A * ((pow(1 + i, n) - 1) / i);
        cout << "Future Worth (F) = " << F << endl;
        
    } else {
        // Handle invalid input
        cout << "Invalid variable. Please enter A or F." << endl;
    }

    return 0;
    
}