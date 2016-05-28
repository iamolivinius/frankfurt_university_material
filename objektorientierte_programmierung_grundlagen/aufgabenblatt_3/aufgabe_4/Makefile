CXX = clang++
CXXFLAGS = --std=c++11

all: mystring_test

mystring_test: MyString.o mystring_test.cpp
	$(CXX) $(CXXFLAGS) -o mystring_test MyString.o mystring_test.cpp

MyString.o: MyString.h MyString.cpp
	$(CXX) $(CXXFLAGS) -c MyString.cpp

clean:
	rm -rf mystring_test MyString.o
