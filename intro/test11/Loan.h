#ifndef LOAN_H
#define LOAN_H

/*  头文件，类的定义    */
class Loan
{
public:
    Loan();
    Loan(double rate, int years, double amount);
    
    double getAnnualInterestRate();
    int getNumberOfYears();
    double getLoanAmount();

    void setAnnualInterestRate(double rate);
    void setNumberOfYears(int years);
    void setLoanAmount(double amount);

    double getMonthlyPayment();
    double getTotalPayment();

/*  为了防止用户直接修改类的属性，我们应该使用private关键字，将属性声明为私有的，也就是
    所谓的数据域封装（data filed encapsulation）。如果一个数据域是私有的，那么类定义
    之外的程序中，是无法通过直接引用实例对象来访问的，但用户程序需要经常提取，修改数据域，
    为了使得私有数据域可以被访问，可定义一个get函数返回数据域的值；为使得私有数据域可以
    被修改，可定义一个set函数为数据域设置新值。get函数就是一个访问器（accessor）， set
    函数就是一个更改器（mutator）*/
private:
    double annualInterestRate;
    int numberOfYears;
    double loanAmount;
};

#endif