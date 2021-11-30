#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int password;
	cout << "请输入一个四位密码，首字母不要为0：";
	cin >> password;
	int i = 0;
	while (i!=password)
	{
		i++;
	}
	cout << "破解成功，密码是："  << i << endl;
	return 0;
}