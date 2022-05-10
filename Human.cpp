#include "Human.h"

Human::Human(int age, std::string surname, std::string name, std::string midname)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
}

Student::Student(int age, std::string surname, std::string name, std::string midname, bool on_lesson)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->on_lesson = on_lesson;
}

void Student::Print()
{
	std::cout << "Student's surname: " << this->surname << std::endl;
	std::cout << "Student's name: " << this->name << std::endl;
	std::cout << "Student's midname: " << this->midname << std::endl;
	std::cout << "Student's age: " << this->age << std::endl;
	std::cout << "Student's presence: " << this->on_lesson << std::endl << std::endl;
}

Boss::Boss(int age, std::string surname, std::string name, std::string midname, int number_of_workers)
{
	this->age = age;
	this->surname = surname;
	this->name = name;
	this->midname = midname;
	this->number_of_workers = number_of_workers;
}

void Boss::Print()
{
	std::cout << "Boss's surname: " << this->surname << std::endl;
	std::cout << "Boss's name: " << this->name << std::endl;
	std::cout << "Boss's midname: " << this->midname << std::endl;
	std::cout << "Boss's age: " << this->age << std::endl;
	std::cout << "Number of boss's workers: " << this->number_of_workers << std::endl << std::endl;
}
