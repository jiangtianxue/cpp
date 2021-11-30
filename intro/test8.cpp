#include <iostream>
using namespace std;


void reverse(int list[], int size){
    for (int i = 0; i < size / 2; i++){
        int temp = list[i];
        list[i] = list[size - i - 1];
        list[size - i - 1] = temp;
    }
}

int main(){
    int list[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverse(list, size);
    for (int i = 0; i < size; i++){
        cout << list[i] << endl;
    }
    return 0;
}

