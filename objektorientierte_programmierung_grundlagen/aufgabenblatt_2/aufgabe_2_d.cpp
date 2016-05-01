#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    float a, b;
    string DIVundefined = "Division durch 0 ist nicht definiert!";

    cout << "Zahl a: ";
    cin >> a;
    cout << "Zahl b: ";
    cin >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (b == 0) {
        cout << a << " / " << b << " = " << DIVundefined << endl;
    } else {
        cout << a << " / " << b << " = " << a / b << endl;
    }

    return 0;
}
