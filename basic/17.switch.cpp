#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int mark;
	cout << "请输入成绩：";
	cin >> mark;
	switch (mark/20)
	{
		case 5:
		{
			if (mark>100)
			{
				cout << "error" << endl;
				break;
			}
			else
			{
				cout << "Good" << endl;
			}
		}

		case 4:
		{
			cout << "Good" << endl;
			break;
		}

		case 3:
		{
			cout << "Soso" << endl;
			break;
		}

		case 2:        //没有case对应的break会运行到下一个case中
		case 1:
		case 0:
		{
			if (mark>=0)
			{
				cout << "Please work hard!" << endl;
			}
			break;
		}

		default:
		{
			cout << "error" << endl;
		}
	}
	return 0;
}