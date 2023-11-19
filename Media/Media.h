#pragma once
#include <string>

namespace MediaManagement {

    class Media {
    public:
        virtual ~Media() = default;
        virtual void display() const = 0;
        virtual Media& operator=(const Media& other) = 0;
        virtual Media& operator=(Media&& other) noexcept = 0;
    };

}
