// There is NO need to use formatting instructions unless the output
// should be right aligned

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a, b;

    cout << "Zahl a: ";
    cin >> a;
    cout << "Zahl b: ";
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    return 0;
}
