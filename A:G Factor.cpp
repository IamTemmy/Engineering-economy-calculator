//This code calculates the equivalent uniform annual series A for an Arithmetic Gradient G

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
    double A;
    double G;
    double i;
    double n;
    char missingVariable;

    // Prompt for missing variable
    cout << "Which variable do you want to find? (A or G): ";
    cin >> missingVariable;

    // ...

    if (missingVariable == 'A') {
        cout << "Enter Gradient (G): ";
        cin >> G;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate P using the formula for P/G
        A = G * ((1 / i) - (n / (pow(1 + i, n) - 1)));
        cout << "Annual Worth (A) = " << A << endl;
        
    } else if (missingVariable == 'G') {
        cout << "Enter Present Worth (P): ";
        cin >> A;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate G by rearranging the formula for P/G
        G = A / ((1 / i) - (n / (pow(1 + i, n) - 1)));
        cout << "Gradient (G) = " << G << endl;
    
    } else {
        // Handle invalid input
        cout << "Invalid variable. Please enter A or G." << endl;
    }

    // ...

    return 0;
}
