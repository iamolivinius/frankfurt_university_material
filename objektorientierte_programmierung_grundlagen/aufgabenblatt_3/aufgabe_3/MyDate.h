#ifndef MYDATE_H_
#define MYDATE_H_

#include "Month.h"

class MyDate {
public:
	MyDate();
	MyDate(int day, Month month, int year);
	~MyDate();

	int getDay();
	Month getMonth();
	int getYear();

	static const MyDate defaultDate;

	bool isLeapYear();
	void printDate();
	void incrementBy(int numberOfDays);
private:
	int day;
	Month month;
	int year;
};

#endif
