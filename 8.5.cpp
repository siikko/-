#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(const int& id_in, const string& name_in)
		:m_id{ id_in }, m_name{ name_in }
	{}

	Student(const string&name_in) //defualt parameter�� ����
		//:m_id{0},m_name{name_in} //��ȿ�����̴�.
		  :Student(0,name_in) //�̷��� �ϴ� ���� ����. (���� ������:�����ڸ� �������� ��)
	{}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}

private:
	int m_id;
	string m_name;

};

int main()
{
	Student st1(0, "jack jack");
	st1.print();

	Student st2("�̽���");
	st2.print();

}