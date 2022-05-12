#pragma once

#include <iostream>

class Human
{
public:
	Human(){}

	Human(int, std::string, std::string, std::string);

	virtual void Print() = 0;

protected:
	int age;
	std::string surname;
	std::string name;
	std::string midname;
};

class Student:protected Human
{
	bool on_lesson;
public:
	Student(){}

	Student(int, std::string, std::string, std::string, bool);

	void Print() override;

};

class Boss :public Human
{
	int number_of_workers;
public:
	Boss(){}

	Boss(int, std::string, std::string, std::string, int);

	void Print() override;

};

