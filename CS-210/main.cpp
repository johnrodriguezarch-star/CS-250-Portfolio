#include "InvestmentCalculator.h"

#include <iostream>
#include <limits>
#include <string>

using namespace std;

// Gets a positive decimal value and keeps asking until the user enters valid input.
double getPositiveNumber(const string& t_prompt) {
    double value;

    while (true) {
        cout << t_prompt;
        if (cin >> value && value > 0) {
            return value;
        }

        cout << "Please enter a positive number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Gets a positive whole number for the number of years.
int getPositiveYears(const string& t_prompt) {
    int years;

    while (true) {
        cout << t_prompt;
        if (cin >> years && years > 0) {
            return years;
        }

        cout << "Please enter a positive whole number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    char runAgain = 'y';

    while (runAgain == 'y' || runAgain == 'Y') {
        cout << string(34, '*') << "\n";
        cout << "********** Data Input **********\n";

        double initialInvestment = getPositiveNumber("Initial Investment Amount: $");
        double monthlyDeposit = getPositiveNumber("Monthly Deposit: $");
        double annualInterest = getPositiveNumber("Annual Interest: %");
        int numberOfYears = getPositiveYears("Number of Years: ");

        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();

        // The class handles the investment calculations and report output.
        InvestmentCalculator investment(initialInvestment, monthlyDeposit, annualInterest, numberOfYears);
        investment.displayWithoutMonthlyDeposits();
        investment.displayWithMonthlyDeposits();

        cout << "\nWould you like to test another investment? (y/n): ";
        cin >> runAgain;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";
    }

    cout << "Thank you for using the Airgead Banking investment calculator.\n";
    return 0;
}
