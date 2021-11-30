#include <iostream>
using namespace std;
struct student
{
	int idNumber;
	char name[15];
	int age;
};
void display(student *arg);

int main(int argc, char const *argv[])
{
	student s1 = {2020, "liurun", 22};
	student *s1ptr = &s1;                   //定义结构指针，并把s1的地址赋给s1ptr
	display(s1ptr);                         //传递的是指针不是指针代表的值
	return 0;
}

void display(student *arg)
{
	cout << "学号:" << arg->idNumber << endl  << "姓名:" << arg->name << endl  << "年龄:" << arg->age << endl;
	//用箭头操作符访问数据
}