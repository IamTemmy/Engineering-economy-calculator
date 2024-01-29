//This code converts an arithmetic gradient G (not including the baase amount) for n years
//into a present worth at year 0. This is the arithmetic present worth

#include <iostream>
#include <cmath>

using namespace std;

// F = Future Worth
// P = Present Worth
// A = Annual Worth
// G = Arithmetic Gradient
// i = interest rate per time period
// n = number periods/years, months, days
// t = time/years, months, days

int main() {
    double P;
    double G;
    double i;
    double n;
    char missingVariable;

    // Prompt for missing variable
    cout << "Which variable do you want to find? (P or G): ";
    cin >> missingVariable;

    // ...

    if (missingVariable == 'P') {
        cout << "Enter Gradient (G): ";
        cin >> G;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate P using the formula for P/G
        P = (G / i) * (((pow(1 + i, n) - 1) / (i * pow(1 + i, n))) - (n / pow(1 + i, n)));
        cout << "Present Worth (P) = " << P << endl;
        
    } else if (missingVariable == 'G') {
        cout << "Enter Present Worth (P): ";
        cin >> P;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate G by rearranging the formula for P/G
        G = P * i * ((pow(1 + i, n) * (i + n)) / (pow(1 + i, n) - 1));
        cout << "Gradient (G) = " << G << endl;
    
    } else {
        // Handle invalid input
        cout << "Invalid variable. Please enter P or G." << endl;
    }

    // ...

    return 0;
}
