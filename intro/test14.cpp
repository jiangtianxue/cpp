#include <iostream>
using namespace std;

int main(){
    char grade;
    cout << "enter your midterm grade: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "great";
        break;
    case 'B':
        cout << "good";
        break;
    case 'C':
        cout << "ok";
        break;
    case 'D':
    case 'E':
        cout << "not good";
        break;
    
    default:
        cout << "this is not a right grade format." << endl;
        break;
    }
}