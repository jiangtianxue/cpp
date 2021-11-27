#include <iostream>
#include <cmath>

void quadratic(int a, int b, int c, double& root1, double& root2);

int main(){
    using namespace std;
    double root1;
    double root2;
    quadratic(1, -3, -4, root1, root2);
    cout << "the roots are " << root1 << " and " << root2 << endl;

    return 0;
}


void quadratic(int a, int b, int c, double& root1, double& root2){
    root1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
    root2 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
}