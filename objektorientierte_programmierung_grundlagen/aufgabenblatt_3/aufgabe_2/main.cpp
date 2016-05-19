#include "Book.h"

int main(int argc, char **argv) {
    Book b1("author1", "title1", 1111111111, 1.0);
    Book b2("author2", "title2", 2222222222, 2.0);
    Book b3("author3", "title3", 3333333333, 3.0);

    b1.print();
    b2.print();
    b3.print();
}
