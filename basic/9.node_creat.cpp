#include <iostream>
using namespace std;
struct node
{
	char data;
	node *next;                                      //指针的声明
};                                                   //定义链表结构

node *Create();                                      //创建列表的函数，返回表头
void Showlist(node *head);                           //遍历链表的函数，参数为表头
int main(int argc, char const *argv[])
{
	node *head;
	head = Create();                                //以head为表头创建一个链表，初始化表头表尾指针，返回表头指针
	Showlist(head);                                 //遍历以head为表头的链表
	return 0; 
}

node *Create()                                      //返回node结点的函数
{
	node *head = NULL;                              //表头指针，一开始没有任何结点，所以为NULL
	node *pEnd = head;                              //表尾指针，一开始没有任何指针，所以指向表头
	node *ps;                                       //创建新节点使用的指针
	char temp;
	cout << "请输入字符串，以#结尾：" << endl;
	do
	{
		cin >> temp;
		if (temp!='#')
		{
			ps = new node;                         //创建新节点
			ps->data = temp;                       //新节点的数据
			ps->next = NULL;                       //新节点将成为表尾，所以next为NULL
			if (head == NULL)                      //如果链表还没有任何结点存在
			{
				head = ps;                         //则表头指向新节点
			}
			else
			{
				pEnd->next = ps;                  //否则价格新节点连接在表尾
			}
			pEnd = ps;                            //新节点成为新的表尾
		}
	} while (temp!='#');
	return head; 
}

void Showlist(node *head)
{
	node *pRead = head;                           //初始化访问指针
	cout << "链表中数据为：" << endl;
	while (pRead!=NULL)
	{
		cout << pRead->data;
		pRead = pRead->next;                      //访问指针向后移动
	}
	cout << endl;
}