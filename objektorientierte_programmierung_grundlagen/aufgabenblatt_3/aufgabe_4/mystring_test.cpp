#include <iostream>
#include <cstdlib>
#include <string>
#include "MyString.h"
#include <ctime>

using namespace std;

void format(MyString& Ls);
void performanceTests();

int main(void)
{
 unsigned int uiL=40;
 MyString a("Krautsalat");
 MyString b = "Blumentopferde";
 MyString c('Q');
 MyString d(uiL);
 MyString e = a;

 a.print();  format(a);
 b.print();  format(b);
 c.print();  format(c);
 d.print();  format(d);
 e.print();  format(e);

 cout << endl;

 int iPos, iLae;
 char iZch;

 cout << "Geben Sie eine Zeichenkette ein: ";
 cout << endl;
 a.print(); format(a);

 cout << endl << "Geben Sie Startindex und Laenge der zu bildenden Teilzeichenkette ein: ";
 cin >> iPos >> iLae;
 a.substring(iPos,iLae).print();
 MyString whatever = a.substring(iPos,iLae);
 format(whatever);

 cout << endl << "Resize-Test; geben Sie die neue Groesse ein: ";
 cin >> iLae;
 a.resize(iLae);
 a.print(); format(a);

 cout << endl << "Index-Test. Geben Sie das zu suchende Zeichen ein sowie die Stelle, ab der mit der Suche begonnen werden soll: ";
 cin >> iZch >> iPos;
 cout << "Ergebnis: Position ist " << a.indexOf(iZch,iPos) << endl;

 cout << endl << "Ersetzungstest: In Ihrer Zeichenkette wird an der Stelle " << iPos << " das vorhandene Zeichen durch 'B' ersetzt: " << endl;
 a.replace('B',iPos);
 a.print(); format(a);
 cout << endl;

  // optional: part f)
  performanceTests();

  return 0;
}

void format(MyString& Ls)
{
  cout << " (" << Ls.strlength()   << "|" << Ls.capacity() << ")  -  ";
}

void performanceTests()
{
  //
  // Exercise 3.4, part f): Performance measurements
  //
  cout << endl << "Es folgen Performanztests (Teilaufgabe f)):" << endl;

//  MyString zero("0");
//
//  MyString ms;
//  for (int i = 0; i < 100000; i++) {
//	  ms.append(zero);
//  }
//  ms.print();

  string zero = "0";
  string ms;
  for (int i = 0; i < 100000; i++) {
	  ms.append(zero);
  }
}
