#include "Movie.h"
#include <iostream>

namespace MediaManagement {

    // Constructor
    Movie::Movie(const std::string& title, const std::string& director)
            : title(title), director(director) {}

    // Copy constructor
    Movie::Movie(const Movie& other)
            : title(other.title), director(other.director) {}

    // Move constructor
    Movie::Movie(Movie&& other) noexcept
            : title(std::move(other.title)), director(std::move(other.director)) {}

    // Copy assignment operator
    Movie& Movie::operator=(const Movie& other) {
        if (this != &other) {
            title = other.title;
            director = other.director;
        }
        return *this;
    }

    // Move assignment operator
    Movie& Movie::operator=(Movie&& other) noexcept {
        if (this != &other) {
            title = std::move(other.title);
            director = std::move(other.director);
        }
        return *this;
    }

    // Destructor
    Movie::~Movie() {}

    // Display function
    void Movie::display() const {
        std::cout << "Movie: " << title << ", Director: " << director << std::endl;
    }

}
