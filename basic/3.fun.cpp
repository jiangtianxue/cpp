#include <iostream>
using namespace std;

int max (int a, int b);

int main(int argc, char const *argv[])
{
	int a, b;
	int t;
	cout << "请输入两个整数：" << endl;
	cin >> a >> b;
	t = max (a, b);
	cout << t << endl;	
	return 0;
}

int max (int a, int b)
{
	int max;
	if (a>=b)
	{
		max = a;
	}
	else
	{
		max = b;
	}

	return max;
}