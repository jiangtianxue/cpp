#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i = 3;
	int *iptr = &i;                                    //*声明iptr是指针变量，不是取值的意思，&是取地址符
	int **iptrptr = &iptr;                             //iptrptr是一个指针变量，存的是iptr地址
													   //由于iptr已经是一个指针变量，用另一个指针变量指向它需要中两个**
	cout << "变量i的地址是：" << iptr << endl;          //指针变量存的是地址
	cout << "变量i的值：" << *iptr << endl;            //这里的*是取值，在一个指针变量前面加*是取这个指针变量存的地址对应的值
	cout << "指针iptr的地址是：" << iptrptr << endl;   //iptrptr是指针变量，存着iptr的地址 
	cout << "指针iptr指向：" << *iptrptr << endl;      //*iptrptr是得到iptr的值，即iptr指向的地址
	*iptr = *iptr + 2;
	cout << "变量i的值：" << *iptr << endl;
	cout << **iptrptr << endl;                        //等同于*iptr
	return 0;
}