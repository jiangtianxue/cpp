#include <iostream>
#include <cstdlib>        //与获取随机数有关
#include <ctime>          //与获取随机数有关
using namespace std;

int main(int argc, char const *argv[])
{
	srand((unsigned int) time(NULL));
	int ans = rand() % 5 + 1, input;
	cout << "请猜一个数（1~6）："  << endl;
	cin >> input;
	if (input == ans)
	{
		cout << "猜对啦！" << endl;
		return 0;
	}
	cout << "猜错啦，还有两次机会！"  << endl;
	cin >> input;
	if (input == ans)
	{
		cout << "猜对啦！" << endl;
		return 0;
	}
	cout << "猜错啦，还有一次机会！"  << endl;
	cin >> input;
	if (input == ans)
	{
		cout << "猜对啦！" << endl;
		return 0;
	}
	cout << "猜错啦，答案是："  << ans << endl;
	return 0;
}
