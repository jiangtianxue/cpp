#include <iostream>
using namespace std;

int main(){
    double radius;
    cout << "enter a radius: ";
    cin >> radius;

    double area;
    area = radius * radius * 3.14159;

    cout << "the area is " << area << endl;

    double num1, num2, num3;
    cout << "enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double average = (num1 + num2 + num3) / 3;
    cout << "the average of " << num1 << " " << num2 << " " << num3
        << " is " << average << endl;

    double x;
    /*  这里需要有一个括号，否则报错；这里没有endl，则不会换行  */
    cout << (x = 1);

    return 0;

}