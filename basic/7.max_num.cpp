#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, max;
	cout << "请输入两个数字：";
	cin >> a >> b;
	if (a>=b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	cout << "较大的数字是：" << max << endl;
	return 0;
}