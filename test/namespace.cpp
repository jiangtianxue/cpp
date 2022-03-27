#include <iostream>
#include <string>

using namespace std;

namespace first {
    int a = 10;
}

int a = 30;

int main() {
    int a = 40;
    cout << a << endl;
    cout << ::a << endl;

    {
        using first::a;
        cout << a << endl;
    }

    cout << a << endl;
    using namespace first;
    cout << a << endl;

    return 0;
}