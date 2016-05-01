#include <iostream>
#include <typeinfo>

using namespace std;

void whatIs(unsigned int ui) {
    cout << typeid(ui).name() << ": " << ui << endl;
}
void whatIs(float f) {
    cout << typeid(f).name() << ": " << f << endl;
}
void whatIs(int i) {
    cout << typeid(i).name() << ": " << i << endl;
}
void whatIs(double d) {
    cout << typeid(d).name() << ": " << d << endl;
}
void whatIs(char const * s) {
    cout << typeid(s).name() << ": " << s << endl;
}
void whatIs(std::string s) {
    cout << typeid(s).name() << ": " << s << endl;
}

int main(int argc, char const *argv[]) {
    unsigned int myUI = 42;
    float myF = 3.1415;
    std::string myS = "C++-String";
    whatIs(42);
    whatIs(myUI);
    whatIs(2.71);
    whatIs(myF);
    whatIs('a');
    whatIs("ein Text");
    whatIs(myS);

    return 0;
}
