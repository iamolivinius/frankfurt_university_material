#include <cstring>
#include <iostream>
#include <string>

#include "MyString.h"
#include "MyConsts.h"

MyString::MyString(int size) {
	this->c_pointer = new char[size];
	this->length = 0;
	this->max_length = size;
}

MyString::MyString(const char* p) {
	int strlength = strlen(p);
	this->c_pointer = new char[strlength];
	this->length = strlength;
	this->max_length = strlength;

	memcpy(this->c_pointer, p, strlength * sizeof(char));
}

MyString::MyString(const MyString& obj) {
	this->c_pointer = new char[obj.max_length];
	this->c_pointer = obj.c_pointer;
	this->length = obj.length;
	this->max_length = obj.max_length;
}

MyString::~MyString() {
	delete[] this->c_pointer;
}

void MyString::print() {
	for (int i = 0; i < this->length; i++) {
		std::cout << this->c_pointer[i];
	}
}

int MyString::strlength() {
	return this->length;
}

int MyString::capacity() {
	return this->max_length;
}

int MyString::read() {
	std::string line;
	std::cout << "Enter something: ";
	std::getline(std::cin, line);

	int strSize = line.length();

	if (strSize > static_cast<int>(MyConsts::MAX) || strSize < static_cast<int>(MyConsts::MIN))
		return -1;

	if (strSize > this->max_length) {
		delete[] this->c_pointer;
		this->c_pointer = new char[strSize];
	}

	memcpy(this->c_pointer, line.data(), strSize * sizeof(char));
	this->max_length = strSize;
	this->length = strSize;

	return strSize;
}

MyString MyString::substring(int pos, int length = 0) {
	int characters;
	if (length == 0) {
		characters = this->length - pos;
	} else {
		characters = length - pos;
	}

	char* newStr = new char[characters];
	memcpy(newStr, &this->c_pointer[pos], characters * sizeof(char));
	return MyString(newStr);
}

MyString& MyString::resize(int length) {
	if (length > this->length)
		this->max_length = length;

	return *this;
}

int MyString::indexOf(char c, int pos) {
	for (int i = pos; i < this->length; i++) {
		if (this->c_pointer[i] == c)
			return i;
	}
	return -1;
}

MyString& MyString::replace(char rep, unsigned int pos) {
	if (pos < this->length)
		this->c_pointer[pos] = rep;

	return *this;
}

void MyString::append(MyString& s) {
	int newLength = this->strlength() + s.strlength();
	char* newString = new char[newLength];

	memcpy(newString, this->c_pointer, this->strlength() * sizeof(char));
	memcpy(&newString[this->length], s.c_pointer, s.strlength() * sizeof(char));

	delete[] this->c_pointer;
	this->c_pointer = newString;
	this->length = newLength;
	this->max_length = newLength;
}
