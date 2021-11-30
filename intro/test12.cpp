#include <iostream>
/*  c++缺乏原生数据类型直接操作字符串，但是在string类的帮助下，可以采取和原生数据类型相似的
    方式来处理字符串.要使用string类，必须先包含string库    */
#include <string>
using namespace std;

int main(){
    string day;
    char c;
    bool t = false;
    day = "Monday";
    c = 'a';
    if (t) {
        cout << day << endl;
        cout << c << endl;
    }
    else {
        cout << "nothing" << endl;
    }
    
}