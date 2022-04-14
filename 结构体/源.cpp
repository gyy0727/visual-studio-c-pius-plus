#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	student s1 = { "zhangsan",16,300 };
	cout << " 姓名 " << s1.name << " 年龄 " << s1.age << " 分数 " <<  s1.score << endl;
	return 0;
}