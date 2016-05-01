#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    srand(time(0));
    int z = rand() % 10 + 1;

    for (int i = 0; i < z; i++) {
        cout << "hello, Oliver!\n";
    }

    return 0;
}
