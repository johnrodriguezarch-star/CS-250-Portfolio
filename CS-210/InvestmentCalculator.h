#ifndef AIRGEADBANKING_INVESTMENTCALCULATOR_H_
#define AIRGEADBANKING_INVESTMENTCALCULATOR_H_

class InvestmentCalculator {
public:
    InvestmentCalculator(double t_initialInvestment, double t_monthlyDeposit,
                         double t_annualInterest, int t_numberOfYears);

    void displayWithoutMonthlyDeposits() const;
    void displayWithMonthlyDeposits() const;

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_numberOfYears;

    void displayReport(double t_monthlyDeposit, const char* t_title) const;
};

#endif // AIRGEADBANKING_INVESTMENTCALCULATOR_H_
