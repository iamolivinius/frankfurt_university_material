#include <iostream>
#include <iomanip>
#include <ctime>

#include "MyDate.h"
#include "Month.h"

using namespace std;

MyDate::MyDate() {
	MyDate dd = MyDate::defaultDate;
	this->year = dd.getYear();
	this->month = dd.getMonth();
	this->day = dd.getDay();
}

MyDate::MyDate(int day, Month month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

MyDate::~MyDate() {
}

int MyDate::getYear() {
	return this->year;
}

Month MyDate::getMonth() {
	return this->month;
}

int MyDate::getDay() {
	return this->day;
}

const MyDate MyDate::defaultDate(1, Month::JANUARY, 1970);

bool MyDate::isLeapYear() {
	if (this->year % 4 == 0) {
		if (this->year % 100 == 0) {
			if (this->year % 400 == 0) {
				return true;
			} else {
				return false;
			}
		} else {
			return true;
		}
	} else {
		return false;
	}
}

void MyDate::printDate() {
	cout << setfill('0') << setw(2) << this->day << ".";
	cout << setfill('0') << setw(2) << static_cast<int>(this->month) << ".";
	cout << setfill('0') << setw(4) << this->year << endl;
}

void MyDate::incrementBy(int numberOfDays) {
	tm t = { };
	t.tm_year = this->year - 1900;
	t.tm_mon = static_cast<int>(this->month) - 1;
	t.tm_mday = this->day;

	t.tm_mday += numberOfDays;
	mktime(&t);

	this->year = t.tm_year + 1900;
	this->month = static_cast<Month>(t.tm_mon + 1);
	this->day = t.tm_mday;
}
