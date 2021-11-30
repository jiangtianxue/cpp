#include <iostream>
using namespace std;

int main(){
    cout << (7>5) << endl;

    cout << "enter weight in pounds: ";
    double weight;
    cin >> weight;

    cout << "enter height in inches: ";
    double height;
    cin >> height;

    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    double weightInKilograms = weight * KILOGRAMS_PER_POUND;
    double heightInMeters = height * METERS_PER_INCH;

    double bmi = weightInKilograms / (heightInMeters * heightInMeters);

    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5)
        cout << "underweight" << endl;
    else if (bmi < 25)
        cout << "normal" << endl;
    else if (bmi < 30)
        cout << "overweight" << endl;
    else
        cout << "obese" << endl;


    int day;
    cout << "enter a number between 1 to 7: ";
    cin >> day;
    switch (day)
    {
    case 1: 
    case 2:
    case 3:
    case 4:
    case 5: cout << "weekday" << endl; break;
    case 6: 
    case 7: cout << "weekend" << endl; break;
    default:    cout << "please enter right number." << endl;
        break;
    }

    double x, y, z;
    /*  这种多参数输入的语句模式要记住  */
    cin >> x >> y >> z;

    cout << (x < y && y < z ? "sorted" : "not sorted") << endl;
    return 0;
}