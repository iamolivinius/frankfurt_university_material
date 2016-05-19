#include <iostream>

#include "Book.h"

using namespace std;

Book::Book(string author, string title, long int isbn, double price) {
    this->author = author;
    this->title = title;
    this->isbn = isbn;
    this->price = price;
    this->id = ++Book::id_pool;
}

Book::~Book() {}

int Book::id_pool = 0;

void Book::print() {
    cout << "author: " << author << endl;
    cout << "title: " << title << endl;
    cout << "isbn: " << isbn << endl;
    cout << "price: " << price << endl;
    cout << "id: " << id << endl;
}
