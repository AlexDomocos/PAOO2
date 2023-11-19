#pragma once
#include "../Media/Media.h"

namespace MediaManagement {

    class Movie : public Media {
    private:
        std::string title;
        std::string director;

    public:
        Movie(const std::string& title, const std::string& director);
        Movie(const Movie& other);
        Movie(Movie&& other) noexcept;
        Movie& operator=(const Movie& other);
        Movie& operator=(Movie&& other) noexcept;
        ~Movie() override;

        void display() const override;
    };

}
