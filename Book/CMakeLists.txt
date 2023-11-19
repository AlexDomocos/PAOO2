add_library(Book Book.cpp Book.h)

target_include_directories(Book PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Book PUBLIC Media)
