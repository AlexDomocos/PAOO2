#pragma once
#include "../Media/Media.h"

namespace MediaManagement {

    class Book : public Media {
    private:
        std::string title;
        std::string author;

    public:
        Book(const std::string& title, const std::string& author);
        Book(const Book& other);
        Book(Book&& other) noexcept;
        Book& operator=(const Book& other);
        Book& operator=(Book&& other) noexcept;
        ~Book() override;

        void display() const override;
    };

}
