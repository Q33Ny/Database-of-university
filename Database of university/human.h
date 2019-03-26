#include <string>
#ifndef HUMAN_H
#define HUMAN_H
class Human {
public:

	void set_last_name(std::string);
	std::string get_last_name();

	void set_name(std::string);
	std::string get_name();

	void set_second_name(std::string);
	std::string get_second_name();

	std::string get_full_name();

private:
	std::string last_name;
    std::string name;
	std::string second_name;
};
#endif HUMAN_H
