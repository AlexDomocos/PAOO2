#include "../Book/Book.h"
#include "../Movie/Movie.h"
#include <iostream>

using namespace MediaManagement;

int main() {
    Book book("1984", "George Orwell");
    Movie movie("Inception", "Christopher Nolan");

    std::cout << "Displaying Media Information:" << std::endl;
    book.display();
    movie.display();

    Book bookCopy = book;
    Movie movieCopy = movie;
    std::cout << "\nAfter Copy Assignment:" << std::endl;
    bookCopy.display();
    movieCopy.display();

    Book movedBook = std::move(bookCopy);
    Movie movedMovie = std::move(movieCopy);
    std::cout << "\nAfter Move Assignment:" << std::endl;
    movedBook.display();
    movedMovie.display();

    Book anotherBookCopy(book);
    Movie anotherMovieCopy(movie);
    std::cout << "\nAfter Copy Construction:" << std::endl;
    anotherBookCopy.display();
    anotherMovieCopy.display();

    Book anotherMovedBook(std::move(anotherBookCopy));
    Movie anotherMovedMovie(std::move(anotherMovieCopy));
    std::cout << "\nAfter Move Construction:" << std::endl;
    anotherMovedBook.display();
    anotherMovedMovie.display();

    return 0;
}
