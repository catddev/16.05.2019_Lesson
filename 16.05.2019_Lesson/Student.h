#pragma once
#include"Learner.h"

class Student :public Learner {
private:
	string uni;
	string group;
public:
	Student();
	Student(string name, int age, string uni, string group);

	void show();
	friend istream& operator>>(istream& is, Student & obj);
};