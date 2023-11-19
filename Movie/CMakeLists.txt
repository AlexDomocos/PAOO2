add_library(Movie Movie.cpp Movie.h)

target_include_directories(Movie PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Movie PUBLIC Media)
