#include "Learner.h"

Learner::Learner()
{
	name = "";
	age = 0;
	type = "";
}

void Learner::setName(string name)
{
	this->name = name;
}

void Learner::setAge(int age)
{
	this->age = age;
}

void Learner::setType(string type)
{
	this->type = type;
}

string Learner::getType()
{
	return type;
}

Learner::Learner(string name, int age)
{
	this->name = name;
	this->age = age;
}

void Learner::show()
{
	cout << type << ": " << name << " " << age << endl;
}
