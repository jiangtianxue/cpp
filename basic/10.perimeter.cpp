#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float radius, length;
	const float pi = 3.1415926;
	cout << "请输入半径：";
	cin >> radius;
	length = 2 * pi * radius;
	cout << "这个圆的周长是：" << length << endl;
	return 0;
}