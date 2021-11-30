#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i, j , k;
	int number;
	for (i=1; i<9; i++)
	{
		for (j=0;j<9;j++)
		{
			for (k=0; k<9; k++)
			{
				number =  i*100 + j*10 +k;
				if (number != i*i*i + j*j*j + k*k*k)
				{
					break;
				}
				cout << i << j << k << endl;

			}
		}
	}
	return 0;
}