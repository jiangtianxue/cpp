#include <iostream>
#include <iomanip>
#include "Loan.h"
using namespace std;


/*  main函数文件    */
int main(){
    cout << "enter yearly interest rate, for example 8.25: ";
    double annualInterestRate;
    cin >> annualInterestRate;

    cout << "enter number of years as an integer, for example 5: ";
    int numberOfYears;
    cin >> numberOfYears;

    cout << "enter loan amount, for example 120000.95: ";
    double loanAmount;
    cin >> loanAmount;

    Loan loan1;
    Loan loan2(annualInterestRate, numberOfYears, loanAmount);

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "the monthly payment of loan1 is " << loan1.getMonthlyPayment() << endl;
    cout << "the total payment of loan1 is " << loan1. getLoanAmount() << endl;

    cout << endl;
    cout << "the monthly payment of loan2 is " << loan2.getMonthlyPayment() << endl;
    cout << "the total payment of loan2 is " << loan2. getLoanAmount() << endl;

    return 0;
    
}