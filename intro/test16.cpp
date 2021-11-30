#include <iostream>
#include <cmath>

const double PI = 3.14159;

/*  返回一个圆的面积*/
double area(double radius);

/*  返回一个球的体积*/
double volume(double radius);

int main(){
    /*  预编译指令using放在函数定义内，类似于将一个变量声明放在函数定义内，using
        预编译指令就局限于函数定义中，可以在不同的函数中定义使用不同的命名空间*/
    using namespace std;

    double radius, area_, volume_;
    cout << "enter a radius for a circle and a sphere: ";
    cin >> radius;

    area_ = area(radius);
    volume_ = volume(radius);

    cout << "the area and volume for a " << radius << " are " 
            << area_ << " and " << volume_ << endl; 
    
    return 0;
}

double area(double radius){
    using namespace std;
    return (PI * pow(radius, 2));
}

double volume(double radius){
    using namespace std;
    return ((4.0/3.0) * PI * pow(radius, 3));
}