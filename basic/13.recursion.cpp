#include <iostream>
using namespace std;

int f (int n);

int main(int argc, char const *argv[])
{
	for (int i=1; i<=8; i++)
	{
		cout << "f(" << i << ")=" << f(i) << endl;
	}
	return 0;
}

int f (int n)
{
	if (n==1)
	{
		return 1;
	}

	else
	{
		return 2 * f(n-1) + 3;
	}
}