#include "InvestmentCalculator.h"

#include <iomanip>
#include <iostream>

using namespace std;

InvestmentCalculator::InvestmentCalculator(double t_initialInvestment, double t_monthlyDeposit,
                                           double t_annualInterest, int t_numberOfYears)
    : m_initialInvestment(t_initialInvestment),
      m_monthlyDeposit(t_monthlyDeposit),
      m_annualInterest(t_annualInterest),
      m_numberOfYears(t_numberOfYears) {
}

// Calculates the investment month by month and prints one row at the end of each year.
void InvestmentCalculator::displayReport(double t_monthlyDeposit, const char* t_title) const {
    double balance = m_initialInvestment;

    cout << "\n" << t_title << "\n";
    cout << string(67, '=') << "\n";
    cout << left << setw(10) << "Year"
         << right << setw(25) << "Year End Balance"
         << setw(30) << "Year End Earned Interest" << "\n";
    cout << string(67, '-') << "\n";

    for (int year = 1; year <= m_numberOfYears; ++year) {
        double yearlyInterest = 0.0;

        // Interest is compounded monthly. The monthly deposit is added before interest.
        for (int month = 1; month <= 12; ++month) {
            double interest = (balance + t_monthlyDeposit) * ((m_annualInterest / 100.0) / 12.0);
            balance += t_monthlyDeposit + interest;
            yearlyInterest += interest;
        }

        cout << left << setw(10) << year
             << right << "$" << setw(24) << fixed << setprecision(2) << balance
             << "$" << setw(29) << yearlyInterest << "\n";
    }
}

void InvestmentCalculator::displayWithoutMonthlyDeposits() const {
    displayReport(0.0, "Balance and Interest Without Additional Monthly Deposits");
}

void InvestmentCalculator::displayWithMonthlyDeposits() const {
    displayReport(m_monthlyDeposit, "Balance and Interest With Additional Monthly Deposits");
}
