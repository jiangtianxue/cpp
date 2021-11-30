class Node                                     //定义一个链表结点
{
public:
	int  readi() const;                        //通过该函数读取idata，但不能改变任何数据
	char readc() const;                        //通过该函数读取cdata，但不能改变任何数据
	bool set(int i);                           //重载，修改idata
	bool set(char c);                          //重载，修改cdata
	bool setp(Node *p);                        //设置前驱结点
	bool setn(Node *n);                        //设置后驱结点
private: 
	int  idata;                                //存储数据保密
	char cdata;                                //存储数据保密
	Node *prior;                               //存储前驱结点数据保密
	Node *next;		                           //存储后驱结点数据保密
};

int Node::readi() const                        //成员函数readi()定义
{
	return idata;
}

char Node::readc() const   
{
	return cdata;
}

bool Node::set(int i)                         //重载成员函数定义
{
	idata = i;
	return true;
}

bool Node::set(char c) 
{
	cdata = c;
	return true;
}

bool Node::setp(Node *p) 
{
	prior = p;
	return true;
}

bool Node::setn(Node *n) 
{
	next = n;
	return true;
}