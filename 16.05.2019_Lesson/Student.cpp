#include "Student.h"

Student::Student():Learner()
{
	uni = "";
	group = "";
}

Student::Student(string name, int age, string uni, string group) :Learner(name, age)
{
	this->uni = uni;
	this->group = group;
}

void Student::show()
{
	Learner::show();
	cout << uni << " " << group << endl;
}


istream & operator>>(istream & is, Student & obj)
{
	getline(is, obj.name, '#');
	is >> obj.age >> obj.uni >> obj.group;
	return is;
}
