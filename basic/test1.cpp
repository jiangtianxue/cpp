#include <iostream>

void swap1(int a, int b);
void swap2(int& a, int& b);
void datingRange(int age, int& min, int& max);

int main(){
    using namespace std;
    int x = 15, y = 128;
    swap1(x, y);
    cout << "值传递：";
    cout << x << "," << y << endl;
    swap2(x, y);
    cout << "引用传递：";
    cout << x << "," << y << endl;

    int young;
    int old;
    /*  引用传递可以返回多个值*/
    datingRange(48, young, old);
    cout << "a 48-year-old could date someone from " << young 
        << " to " << old << " years old" << endl;
    return 0;
}

void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void datingRange(int age, int& min, int& max){
    min = age / 2 + 7;
    max = (age - 7) *2;
}