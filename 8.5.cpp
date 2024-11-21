#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(const int& id_in, const string& name_in)
		:m_id{ id_in }, m_name{ name_in }
	{}

	Student(const string&name_in) //defualt parameter한 느낌
		//:m_id{0},m_name{name_in} //비효율적이다.
		  :Student(0,name_in) //이렇게 하는 것이 낫다. (위임 생성자:생성자를 가져오는 것)
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

	Student st2("이시은");
	st2.print();

}