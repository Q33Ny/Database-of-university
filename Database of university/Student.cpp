#include "student.h"
#include <fstream>

void Student::set_scores(int array[]) {
	for (int i = 0; i < 5; i++) {
	Student::scores[i] = array[i];
	}
}



void Student::save() {
	std::ofstream fout("student.txt", std::ios::app);
	fout << Student::get_full_name() << " ";
	for (int i = 0; i < 5; i++) {
		fout << Student::scores[i] << " ";
	}

	fout << std::endl;
	fout.close();
}

Student::~Student() {
	Student::save();
}