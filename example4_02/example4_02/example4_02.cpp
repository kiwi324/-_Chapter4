#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Student
{
private:
	static int total;
	int num;
	char name[20];
public:
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "Wang");
	void Getname();
	int Getnum();
	static void Print();
};
int Student::total = 0;
Student::Student(int n, char *p)
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::Getname()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print()
{
	cout << "The number of all Students:" << total << endl;
}
int main()
{
	Student::Print();
	Student*p = new Student(13);
	Student::Print();
	p->Print;
	delete p;
	Student::Print();
	Student s[2];
	s[0].Print();
	s[1].Print();
	//Student::Print();
	//Student::Print();
	system("pause");
	return 0;
}
