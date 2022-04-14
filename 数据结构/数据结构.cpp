#include <iostream>
#include <string>

using namespace std;

// 声明一个结构体类型 Books 
struct books
{
	char  title[100];
	char  author[100];
	char  subject[100];
	int   id;
};

int main()
{
	books book1;

	strcpy(book1.title, "c++编程");
	strcpy(book1.author,"李小萌");
	strcpy(book1.subject, "编程");
	book1.id = 123456;
	cout << book1.title << endl;
	cout << book1.author << endl;
	cout << book1.subject << endl;
	cout << book1.id << endl;
	system("pause");
	return 0;
}
