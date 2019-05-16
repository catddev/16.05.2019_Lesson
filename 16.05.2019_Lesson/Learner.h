#pragma once
#include<iostream>
#include<string>
using namespace std;

// Создать базовый класс «Учащийся» и производные классы «Школьник» и «Студент».
// Создать массив объектов базового класса и заполнить этот массив объектами.
// Показать отдельно студентов и школьников

class Learner {
protected:
	string name;
	int age;
	string type;
public:
	Learner();
	Learner(string name, int age);
	void setName(string name);
	void setAge(int age);
	void setType(string type);
	string getType();

	virtual void show();
};