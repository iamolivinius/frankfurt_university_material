#include <iostream>

using namespace std;

class Something {
 private:
  int ivSomeNumber;
  char* ivSomeChars;

 public:
  Something(int i = 0);
  ~Something();
  int showMe() { return ivSomeNumber; };
};

Something::Something(int i) {
  cout << "Einparametriger Konstruktor" << endl;
  if (i > 42)
    ivSomeNumber = 42;
  else
    ivSomeNumber = i;
}

Something::~Something() { cout << "Destruktor" << endl; }

int main(int argc, char** argv) {
  Something a;
  Something b(42);
  if (a.showMe() == 42) {
    Something b;
    cout << "a is 42. Showing b: " << b.showMe() << endl;
  } else {
    cout << "a isn’t 42. Showing b: " << b.showMe() << endl;
  }
}
