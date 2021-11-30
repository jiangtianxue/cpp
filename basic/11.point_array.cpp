#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5};
	int *ptr = a;
	int i;
	for (i=0; i<5; i++)
	{
		cout << a[i] << ptr[i] << *(ptr + i) << *(a+i) << endl;
	}
	return 0;
}