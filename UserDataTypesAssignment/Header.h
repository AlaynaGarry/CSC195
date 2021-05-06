#pragma once
class Employee {
	char firstName[32];
	char lastName[32];
	int age;
	int zipcode;
	float wage;
	int daysWorked;
	int hoursWorkedPerDay[7];

	static const float Tax;
	

public:
	void Write();
	void Read();
};