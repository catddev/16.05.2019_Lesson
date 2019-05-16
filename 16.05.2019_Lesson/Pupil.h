#pragma once
#include"Learner.h"

class Pupil :public Learner {
private:
	string school;
	string grade;
public:
	Pupil();
	Pupil(string name, int age, string school, string grade);

	void show();
	friend istream& operator>>(istream& is, Pupil & obj);
};