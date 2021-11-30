#include <iostream>

void get_numbers(int& input1, int& input2);

void swap_numbers(int& variable1, int& variable2);

void show_results(int& output1, int& output2);

int main(){
    int first_num, second_num;

    /*  因为引用传递，传递的是内存地址，所以三个函数的形参名字都一样*/
    get_numbers(first_num, second_num);
    swap_numbers(first_num, second_num);
    show_results(first_num, second_num);

    return 0;
}

/*  需要使用cout和cin，所以需要指定命名空间*/
void get_numbers(int& input1, int& input2){
    using namespace std;
    cout << "enter two integers: ";
    cin >> input1 >> input2;
}

void swap_numbers(int& variable1, int& variable2){
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void show_results(int& output1, int& output2){
    using namespace std;
    cout << "in reverse order the numbers are: " << output1 
        << " " << output2  << endl;
}


