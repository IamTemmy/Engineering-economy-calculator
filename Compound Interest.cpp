//This code calculates compound interest

#include <iostream>
#include <cmath>

using namespace std;

// P = Principal
// i = interest rate per time period
// n = number periods/years, months, days
// C = Compound interest

int main() {
    double C;
    double P;
    double i;
    double n;
    char missingVariable;

    // Prompt for missing variable
    cout << "Which variable do you want to find? (C, P, i or n): ";
    cin >> missingVariable;

    // ...

    if (missingVariable == 'C') {
        cout << "Enter Principal (P): ";
        cin >> P;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate C using the formula
        C = P * pow(1 + i, n);
        cout << "Compound Interest (C) = " << C << endl;
        
    } else if (missingVariable == 'P') {
        cout << "Enter Compound Interest (C): ";
        cin >> C;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Rearrange formula to solve for P
        P = C / pow(1 + i, n);
        cout << "Principal (P) = " << P << endl;
    
    } else if (missingVariable == 'i') {
        cout << "Enter Compound Interest (C): ";
        cin >> C;
        cout << "Enter Principal (P): ";
        cin >> P;
        cout << "Enter number of periods (n): ";
        cin >> n;
        
        // Solve for i using logarithms
        i = pow(C / P, 1.0 / n) - 1;
        cout << "Interest rate (i) = " << i * 100 << " %" << endl;
        
    } else if (missingVariable == 'n') {
        cout << "Enter Compound Interest (C): ";
        cin >> C;
        cout << "Enter Principal (P): ";
        cin >> P;
        cout << "Enter interest rate (i): ";
        cin >> i;
        
        // Solve for n using logarithms (avoid negative values)
        n = log(C / P) / log(1 + i);
        if (n < 0) {
            cout << "Error: Cannot calculate n for negative C or P." << endl;
        } else {
            cout << "Number of periods (n) = " << n << endl;
        }
        
    } else {
        // Handle invalid input
        cout << "Invalid variable. Please enter C, P, i, or n." << endl;
    }

    return 0;
}
