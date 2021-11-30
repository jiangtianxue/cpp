#include <iostream>
#include "node.h"                                //包含编写好链表节点类的头文件，需要用双引号
using namespace std;

int main(int argc, char const *argv[])
{
	Node a;                                     //创建一个链表结点对象
	a.set(1);                                   //设置idata
	a.set('c');                                 //设置cdata
	cout << a.readi() << endl;
	cout << a.readc() << endl;
	return 0;
}