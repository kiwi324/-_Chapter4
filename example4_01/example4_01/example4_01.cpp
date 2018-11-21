#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;
	Student() { total++; }
	~Student() { total--; }
	Student(int n, char *p = "Wang");
	void Getname();
	int Getnum();
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
int main()
{
	cout << "The number of all students:" << Student::total << endl;
	Student *p = new Student(13);
	cout << "The number of all students:" << Student::total << endl;
	cout << "The number of all studnets:" << p->total << endl;
	delete p;
	cout << "The number of all studnets:" << Student::total << endl;
	Student s[2];
	cout << "The number of all studnets:" << s[0].total << endl;
	cout << "The number of all students:" << s[1].total << endl;
	system("pause");
	return 0;
}
//��һ���������Student::total=0��ΪStudnet::total--------�����������в���û�з�������仯
//�ڶ������������仰ɾ���󣬳����޷���������
//���������������private����޷����У���Ϊtotal�������޷�����total�ˣ������������