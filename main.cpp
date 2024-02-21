// Monthly Payment Calclator

// Header files and namespace header

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Double Variables and combinations

    double loan, rate, pay, mon, apb, ip;


    // Asking for Loan amount, rate % and amount of payments

    cout << "Enter the amount you owe:  $";
    cin >> loan;
    cout << "Enter your rate percentage:  %";
    cin >> rate;
    cout << "Enter the amount of payments made:  ";
    cin >> pay;

    // Calculatations

    rate = rate / 100;
    mon = (rate * pow(1 + rate, pay)) / (pow(1 + rate, pay) - 1) * loan;
    apb = (mon * 12) + loan;
    ip = mon * 12;
    rate = rate / 100;

    // Output Code and Stream Manipulation

    cout << setprecision(2) << fixed;
    cout << "Monthly Payment:  " << setw(10) << mon << endl;
    cout << "Amount Paid Back:  " << setw(10) << apb << endl;
    cout << "Interest Paid:  " << setw(10) << ip << endl;

    return 0;
