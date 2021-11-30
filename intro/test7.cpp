#include <iostream>
using namespace std;

void swap(int& n1, int& n2){
    cout << "\t inside the swap function \n";
    cout << "\t before swapping n1 is " << n1 << " n2 is " << n2 << endl;

    int temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "\t after swapping n1 is " << n1 << " n2 is " << n2 << endl;
}

int main(){
    int num1 = 1;
    int num2 = 2;

    cout << "\t before swapping num1 is " << num1 << " num2 is " << num2 << endl;
    swap(num1, num2);

    cout << "\t after swapping num1 is " << num1 << " num2 is " << num2 << endl;

    return 0;

}