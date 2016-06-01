#include <iostream>
#include <iomanip>

#include "MyDateEn.h"

using namespace std;

void MyDateEn::printDate() {
	cout << setfill('0') << setw(4) << this->getYear() << "/";
	cout << setfill('0') << setw(2) << static_cast<int>(this->getMonth()) << "/";
	cout << setfill('0') << setw(2) << this->getDay() << endl;
}
