#include "MyDate.h"

int main(int argc, char **argv) {
	MyDate defaultDate;
	MyDate todayDate(18, Month::MAY, 2016);

	defaultDate.printDate();
	todayDate.printDate();
	todayDate.incrementBy(200);
	todayDate.printDate();
}
