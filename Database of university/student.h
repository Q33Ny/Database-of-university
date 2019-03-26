#include "human.h"
#ifndef STUDEN_H
#define STUDENT_H

class Student : public Human {
public:
	~Student();
	void save();
	void set_scores(int array[]);


private:
	int scores[5];
};

#endif STUDENT_H
