#include <iostream>
#include <string>
using namespace std;

void mystery(string a, string& b);
void nameDiamond(string s);

int main(){
    using namespace std;
    string name = "liurun";
    cout << name << endl;
    cout << "npos is " << string::npos << endl;
    cout << name.length() << endl;

    string a = "liu";
    string b = "run";
    mystery(a, b);
    /*  a是值传递，所以不会改变a的值*/
    cout << a <<  " " << b << endl;

    nameDiamond("liurun");
    return 0;
}

void mystery(string a, string& b){
    using namespace std;
    a.erase(0, 1);
    /*  b = b + a[0]*/
    b += a[0];
    b.insert(3, "FOO");
}

void nameDiamond(string s){
    for (int i = 0; i < s.length(); i++){
        cout << s.substr(0, i+1) << endl;
    }
    for (int j = 0; j < s.length(); j++){
        for (int i = 0; i < j+1; i++){
            cout << " ";
        }
        cout << s.substr(j+1) << endl;
    }
}