#include <iostream>
using namespace std;

class DayOfYear{
    public:
        void input();
        int get_month();
        int get_day();
    private:
        void check_date();
        int month;
        int day;
};

void DayOfYear::input(){
    // 私有成员只可以在函数定义时候使用
    cin >> month;
    cin >> day;
    check_date();
    cout << "month=" << month << ", day=" << day << endl;
}

void DayOfYear::check_date(){
    if ((month<1) || (month>12) || (day<1) || (day>31)) {
        cout << "illegal date.";
        exit(1);
    }
}

class BankAccount {
    public:
        // 构造函数声明
        BankAccount(int dollars, int cents, double rate);
        void set(int dollars, int cents, double rate);
        void update();
    private:
        double balance;
        double interest_rate;
        double fraction(double percent);
};

// 带有初始化区域的构造函数定义
BankAccount::BankAccount(int dollars, int cents, double rate)
                        : balance(dollars), interest_rate(rate) {
    if ((dollars<0)||(cents<0)||(rate)<0){
        cout << "illegal value of money" << endl;
        exit(1);
    }
    balance = dollars + 0.01*rate;
    interest_rate = rate;
}

// 实例化对象
BankAccount account1(10, 50, 2.0), account2(500, 0, 4.5);



int main(){
    DayOfYear today, birthday;

    today.input();
    birthday.input();
}