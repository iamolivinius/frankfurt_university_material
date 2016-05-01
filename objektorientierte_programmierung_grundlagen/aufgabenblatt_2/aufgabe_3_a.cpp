#include <iostream>
#include <typeinfo>

void whatIs(unsigned int ui) {
    std::cout << typeid(ui).name() << ": " << ui << std::endl;
}
void whatIs(float f) {
    std::cout << typeid(f).name() << ": " << f << std::endl;
}
void whatIs(int i) {
    std::cout << typeid(i).name() << ": " << i << std::endl;
}
void whatIs(double d) {
    std::cout << typeid(d).name() << ": " << d << std::endl;
}
void whatIs(char* s) {
    std::cout << typeid(s).name() << ": " << s << std::endl;
}
void whatIs(std::string s) {
    std::cout << typeid(s).name() << ": " << s << std::endl;
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
