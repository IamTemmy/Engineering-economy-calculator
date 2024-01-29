//this file is to calculate the F/P factor of a given problem, it can also calculate the P/F factor since it requires the 
//same formula

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
    double F;
    double P;
    double i;
    double n;
    char missingVariable;
    
    // Prompt for missing variable
    cout << "Which variable do you want to find? (F, P, i, or n): ";
    cin >> missingVariable;

    if (missingVariable == 'F') {
        cout << "Enter Present Worth (P): ";
        cin >> P;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate F using the formula
        F = P * pow(1 + i, n);
        cout << "Future Worth (F) = " << F << endl;
        
    } else if (missingVariable == 'P') {
        cout << "Enter Future Worth (F): ";
        cin >> F;
        cout << "Enter interest rate (i): ";
        cin >> i;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate P using the formula
        P = F / pow(1 + i, n);
        cout << "Present Worth (P) = " << P << endl;
        
    } else if (missingVariable == 'i') {
        cout << "Enter Future Worth (F): ";
        cin >> F;
        cout << "Enter Present Worth (P): ";
        cin >> P;
        cout << "Enter number of periods (n): ";
        cin >> n;

        // Calculate i using the formula you provided earlier
        i = pow(F/P, 1/n) - 1;
        cout << "Interest rate (i) = " << i << endl;
        
    } else if (missingVariable == 'n') {
        cout << "Enter Future Worth (F): ";
        cin >> F;
        cout << "Enter Present Worth (P): ";
        cin >> P;
        cout << "Enter interest rate (i): ";
        cin >> i;

        // Calculate n using logarithms
        n = log(F/P) / log(1 + i);  // Use log for base-e logarithm
        cout << "Number of periods (n) = " << n << endl;
        
    } else {
        // Handle invalid input
        cout << "Invalid variable. Please enter F, P, i, or n." << endl;
    }

    return 0;
    
}
