#pragma once
#include <string>
#include <iostream>


struct date {
	int day;
	int month;
	int year;
};

struct person {
	std::string name;
	date birthday;
	std::string position = "programmer";
	int salary = 50000;
};

void showObj(date D);

void showObj(person P);