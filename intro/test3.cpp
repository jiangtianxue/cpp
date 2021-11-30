#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
    char a = 'a';
    cout << ++a << endl;
    /*  字符被定义成int或者直接进行强制类型转换，就可以显示其对应的ASCII值，反之亦然  */
    int i = 'A';
    cout << (int)a << endl;
    cout << (char)85 << endl;
    cout << i << endl;

    cout << "enter a lowercase letter: ";
    char lowercase;
    cin >> lowercase;
    char uppercaseLetter = static_cast<char>('A' + (lowercase - 'a'));

    cout << "the corresponding uppercase letter is " 
        << uppercaseLetter << endl;

    ofstream output;
    output.open("numbers.txt");
    output << 65 << " " << 25 << " " << 54 << endl;
    output.close();

    ifstream input;
    input.open("numbers.txt");
    int score1, score2, score3;

    input >> score1 >> score2 >> score3;

    cout << "total score is " << score1 + score2 + score3 << endl;
    input.close();
    cout << "done" << endl;
    return 0;



}