#include <iostream>
#include <string>

using namespace std;

// ����һ���ṹ������ Books 
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

	strcpy(book1.title, "c++���");
	strcpy(book1.author,"��С��");
	strcpy(book1.subject, "���");
	book1.id = 123456;
	cout << book1.title << endl;
	cout << book1.author << endl;
	cout << book1.subject << endl;
	cout << book1.id << endl;
	system("pause");
	return 0;
}
