#include "Structures.h"

void showObj(date D) {
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showObj(person P) {
	std::cout << "Name: " << P.name << std::endl;
	std::cout << "Birthday: ";
	showObj(P.birthday);
	std::cout << "Position: " << P.position << std::endl;
	std::cout << "Salary: " << P.salary << std::endl;
}
