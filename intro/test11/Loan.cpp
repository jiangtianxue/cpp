#include "Loan.h"
#include <cmath>
using namespace std;

/*  cpp文件，类的具体实现   
    Loan类有两个构造函数，三个get函数，三个set函数和计算月还款金额和总还款金额的函数，
    可以用无参构造函数创建一个Loan对象，也可以用含有如下三个参数的构造函数：年利率、
    贷款年限和贷款额。三个get函数分别返回年利率、还款年限和还款额。*/
Loan::Loan(){
    annualInterestRate = 9.5;
    numberOfYears = 30;
    loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount){
    annualInterestRate = rate;
    numberOfYears = years;
    loanAmount = amount;
}

double Loan::getAnnualInterestRate(){
    return annualInterestRate;
}

int Loan::getNumberOfYears(){
    return numberOfYears;
}

double Loan::getLoanAmount(){
    return loanAmount;
}

void Loan::setAnnualInterestRate(double rate){
    annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years){
    numberOfYears = years;
}

void Loan::setLoanAmount(double amount){
    loanAmount = amount;
}

double Loan::getMonthlyPayment(){
    double monthlyInterestRate = annualInterestRate / 1200;
    return loanAmount * monthlyInterestRate / (1 - 
        (pow(1 / (1 + monthlyInterestRate), numberOfYears * 12)));
}

double Loan::getTotalPayment(){
    return getMonthlyPayment() * numberOfYears * 12;
}