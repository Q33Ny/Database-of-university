#include <iostream>
#include "human.h"
#include "student.h"
#include <string>
#include "teacher.h"

int main() {
	std::cout << "Program is database of university v 1.0 " << std::endl;

	std::string last_name;
	std::string name;
	std::string second_name;
	int array[5];
	float sum = 0;
	int work_time = 0;

	Student *stud = new Student;
	std::cout << "Input last name of student: ";
	getline(std::cin, last_name);
	std::cout << "Input name of student: ";
	getline(std::cin, name);
	std::cout << "Input second name of student: ";
	getline(std::cin, second_name);
	stud->set_last_name(last_name);
	stud->set_name(name);
	stud->set_second_name(second_name);
	std::cout << "Input interval scores of student: " << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "[ " << i + 1 << " ] : ";
		std::cin >> array[i];
		sum += array[i];
	}
	stud->set_scores(array);
	delete stud;
	Teacher *tech = new Teacher;
	std::cin.ignore();
	std::cout << "Input last name of teacher: ";
	getline(std::cin, last_name);
	std::cout << "Input name of teacher: ";
	getline(std::cin, name);
	std::cout << "Input second name of teacher: ";
	getline(std::cin, second_name);
	std::cout << "Input work time of teacher: ";
	std::cin >> work_time;
	tech->set_last_name(last_name);
	tech->set_name(name);
	tech->set_second_name(second_name);
	tech->set_work_time(work_time);

	std::cout << "Information about student check in file student.txt" << std::endl;
	std::cout << tech->get_full_name() << " has " << tech->get_work_time() << " work time ." << std::endl;

	delete tech;


	return 0;


	
}