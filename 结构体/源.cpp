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
	cout << " ���� " << s1.name << " ���� " << s1.age << " ���� " <<  s1.score << endl;
	return 0;
}