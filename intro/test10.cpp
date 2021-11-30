#include <iostream>
using namespace std;

class Circle {
    public:
        double radius;
    /*  无参构造函数    */
    Circle(){
        radius = 2;
    }

    /*  有参构造函数    */
    Circle(double newRadius){
        radius = newRadius;
    }

    double getArea(){
        return radius * radius * 3.1415926;
    }

};

int main(){
    /*  26行是创建一个对象，调用Circle类的无参构造函数，实例名后面没有括号，不用传入参数    
        那么radius属性值就是在类定义中默认的值2 */
    Circle circle1;
    /*  29,30行是创建一个对象，调用Circle类的有参构造函数，实例名后面有括号，需要传入参数    
        那么radius属性值就是传入的参数值    */
    Circle circle2(24);
    Circle circle3(125);

    cout << "the area of the circle of radius"
        << circle1.radius << " is " << circle1.getArea() << endl;
    cout << "the area of the circle of radius"
        << circle2.radius << " is " << circle2.getArea() << endl;
    cout << "the area of the circle of radius"
        << circle3.radius << " is " << circle3.getArea() << endl;

    return 0;
}