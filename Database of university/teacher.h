#include "human.h"
#ifndef TEACHER_H
#define TEACHER_H
class Teacher : public Human {
public:
	void set_work_time(int);
	int get_work_time();

private:
	int work_time;
};
#endif TEACHER_H
