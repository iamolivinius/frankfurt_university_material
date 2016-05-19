#ifndef BOOK_H_
#define BOOK_H_

#include <string>

using namespace std;

class Book {
public:
    Book(string author, string title, long int isbn, double price);
    ~Book();

    static int id_pool;
    void print();
private:
    string author;
    string title;
    long int isbn;
    double price;
    int id;
};

#endif
