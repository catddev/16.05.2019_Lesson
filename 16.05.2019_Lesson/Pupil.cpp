#include "Pupil.h"

Pupil::Pupil():Learner()
{
	school = "";
	grade = "";
}

Pupil::Pupil(string name, int age, string school, string grade):Learner(name, age)
{
	this->school = school;
	this->grade = grade;
}

void Pupil::show()
{
	Learner::show();
	cout << school << " " << grade << endl;
}

istream & operator>>(istream & is, Pupil & obj)
{
	getline(is, obj.name, '#');
	//is.get();
	is >> obj.age >> obj.school >> obj.grade;
	return is;
}
