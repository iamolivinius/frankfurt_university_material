#include <iostream>

#include "MyDate.h"
#include "MyDateEn.h"
#include "Month.h"

using namespace std;

int main(int argc, char **argv) {
	MyDate myBirthday(28, Month::FEBRUARY, 1991);
	MyDateEn obamasBirthday(4, Month::AUGUST, 1961);

	cout << "I was born on ";
	myBirthday.printDate();
	cout << endl;

	cout << "Obama was born on ";
	obamasBirthday.printDate();
	cout << endl;

	cout << "If Obama was a European, he’d be born on ";
	obamasBirthday.MyDate::printDate();
	cout << endl;
}
