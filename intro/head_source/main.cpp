#include <iostream>
// #include "head.h"
#include "head.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
	circle c = {2.0};
	cout << "圆的周长是：" << perimeter_of_circle(c.r) << "厘米" << endl;
	return 0;
}
