#include <iostream>
using namespace std;

int main(){
    int number = 42;
    number++;
    cout << "number = " << number << endl;

    cout << "number = " << number++ << endl;

    cout << "number = " << number << endl;

    cout << "number = " << ++number << endl;

    cout << "number = " << number << endl;

    return 0;
}