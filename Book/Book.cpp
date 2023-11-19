#include "Book.h"
#include <iostream>

namespace MediaManagement {

    Book::Book(const std::string& title, const std::string& author)
            : title(title), author(author) {}

    Book::Book(const Book& other)
            : title(other.title), author(other.author) {}

    Book::Book(Book&& other) noexcept
            : title(std::move(other.title)), author(std::move(other.author)) {}

    Book& Book::operator=(const Book& other) {
        if (this != &other) {
            title = other.title;
            author = other.author;
        }
        return *this;
    }

    Book& Book::operator=(Book&& other) noexcept {
        if (this != &other) {
            title = std::move(other.title);
            author = std::move(other.author);
        }
        return *this;
    }

    Book::~Book() {}

    void Book::display() const {
        std::cout << "Book: " << title << ", Author: " << author << std::endl;
    }

}
