#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int sum = 0;
	int i = 1;
	for (; i < 100; ++i)
	{
		sum = sum + i;	
	}
	cout << sum <<endl;
	return 0;
}