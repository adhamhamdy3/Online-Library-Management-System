cmake_minimum_required(VERSION 3.26)
project(OLMS)

set(CMAKE_CXX_STANDARD 23)

add_executable(OLMS main.cpp
        User.cpp
        User.h
        Book.cpp
        Book.h
        Library.cpp
        Library.h
        Librarian.cpp
        Librarian.h
        LibraryUser.cpp
        LibraryUser.h
        Transactions.cpp
        Transactions.h
)
