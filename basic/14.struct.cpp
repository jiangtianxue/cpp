#include <iostream>
using namespace std;

struct student
{
	int idNumber;
	char name[15];
	int age;
	char department[20];
	float gpa;
};

int main(int argc, char const *argv[])
{
	student s1, s2;                          //定义两个结构体类型
	cout << "输入学号：";
	cin >> s1.idNumber;
	cout << "输入姓名：";
	cin >> s1.name;
	cout << "输入年龄：";
	cin >> s1.age;
	cout << "输入院系：";
	cin >> s1.department;
	cout << "输入成绩：";
	cin >> s1.gpa;
	cout << "学生s1信息：" << endl << "学号：" << s1.idNumber << endl << "姓名：" << s1.name <<endl
	     << "年龄：" << s1.age << endl << "院系：" << s1.department << endl << "成绩：" << s1.gpa << endl;
	s2 = s1;                             //结构体可以直接赋值
	cout << "学生s2信息：" << endl << "学号：" << s1.idNumber << endl << "姓名：" << s1.name <<endl
         << "年龄：" << s1.age << endl << "院系：" << s1.department << endl << "成绩：" << s1.gpa << endl;
	return 0;
}