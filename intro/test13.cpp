#include <iostream>
using namespace std;
/*  对于枚举的测试*/
int main(){
    enum MonthLength {  JAN = 31,
                        FEB = 28,
                        MAR = 31,
                        APR = 30,
                        MAY = 31,
                        JUN = 30,
                        JUL = 31,
                        AUG = 31,
                        SEP = 30,
                        OCT = 31,
                        NOV = 30,
                        DEC = 31};
    MonthLength year1, year2;
    year1 = OCT;
    year2 = SEP;
    int i = year1;
    int j = year2;
    cout << year1 << endl;
    cout << year2 << endl;
    cout << i << endl;
    cout << j << endl;

    return 0;
}