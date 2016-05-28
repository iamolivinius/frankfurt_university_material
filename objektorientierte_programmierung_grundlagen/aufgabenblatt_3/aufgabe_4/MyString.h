#ifndef MYSTRING_H_
#define MYSTRING_H_

#include "MyConsts.h"

class MyString {
public:
	MyString(int size = static_cast<int>(MyConsts::MIN));
	MyString(const char* p);
	MyString(const MyString& obj);
	virtual ~MyString();

	void print();
	int strlength();
	int capacity();
	int read();
	MyString substring(int pos, int length);
	MyString& resize(int length);
	int indexOf(char c, int pos);
	MyString& replace(char rep, unsigned int pos);
	void append(MyString& s);

private:
	char* c_pointer;
	int length;
	int max_length;
};

#endif
