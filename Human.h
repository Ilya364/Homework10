#pragma once

#include <iostream>

class Human
{
public:
	Human();

	Human(int, std::string, std::string, std::string);

	virtual void Print() = 0;

	~Human();
protected:
	int age;
	std::string surname;
	std::string name;
	std::string midname;
};

class Student:protected Human
{
public:
	Student();

	Student(int, std::string, std::string, std::string, bool);

	void Print() override;

	~Student();
private:
	bool on_lesson;
};

class Boss :public Human
{
public:
	Boss();

	Boss(int, std::string, std::string, std::string, int);

	void Print() override;

	~Boss();
private:
	int number_of_workers;
};

