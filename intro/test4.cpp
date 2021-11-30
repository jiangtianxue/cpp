#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int count = 0;
    while (count < 100)
    {
        cout << "welcome to c++\n";
        count ++;
    }

    cout << "当前时刻时间:" << time(0) << endl;
    
    int number, max;
    cout << "enter a number, enter \"0\" to finish: ";
    cin >> number;
    max = number;

    

    do{
        cout << "enter a number, enter \"0\" to finish: ";
        cin >> number;
        if (number > max)
            max = number;
    } while (number != 0);

    cout << "max is " << max << endl;
    cout << "number " << number << endl;

    return 0;

}