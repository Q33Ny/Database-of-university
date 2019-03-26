#include <string>
#include "human.h"
#include <sstream>

void Human::set_last_name(std::string last_name) {
	Human::last_name = last_name;
}

std::string Human::get_last_name() {
	return Human::last_name;
}

void Human::set_name(std::string name) {
	Human::name = name;
}

std::string Human::get_name() {
	return Human::name;
}

void Human::set_second_name(std::string second_name) {
	Human::second_name = second_name;
}

std::string Human::get_second_name() {
	return Human::second_name;
}

std::string Human::get_full_name() {
	std::ostringstream full_name;
	full_name << Human::last_name << " " << Human::name << " " << Human::second_name;
	return full_name.str();
}