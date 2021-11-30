#include <iostream>
#include <iomanip>
using namespace std;

void sort (int a[], int size);

int main(int argc, char const *argv[])
{
	int num[] = {2, 3, 5, 5, 8, 9, 6, 1, 0};
	int i;
	const int size = sizeof(num) / sizeof(num[0]);
	cout << "原来的数组：" << endl;
	for (i=0; i<size; i++)
	{
		cout << setw(2) << num[i];
	}
	sort(num, size);                              //向函数传递数组	
	cout << "\n排序后的数组：" << endl;
	for (i=0; i<size; i++)
	{
		cout << setw(2) << num[i];
	}
	return 0;
}

void sort (int a[], int size)
{
	int i, j;
	int temp;
	for (i=0; i<size; i++)
	{
		for (j=i; j<size; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

