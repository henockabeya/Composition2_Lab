#include <iostream>
#include "Page.h"
#include "Book.h"

int main() {
    std::cout << "--- Refactored Multi-File Class Example ---" << std::endl;

    // Demonstrate Page class
    Page p1(1, "Introduction to C++.");
    std::cout << "Page " << p1.getPageNumber() << ": " << p1.getContent() << std::endl;

    // Demonstrate Book class with an aggregated Page
    Book myBook("The C++ Journey", "Bjarne Stroustrup");
    myBook.setPageDetails(42, "Classes and Objects.");

    std::cout << "\nBook Title: " << myBook.getTitle() << std::endl;
    std::cout << "Book Author: " << myBook.getAuthor() << std::endl;
    std::cout << "Current Page: " << myBook.getCurrentPageNumber() << std::endl;
    std::cout << "Page Content: " << myBook.getCurrentPageContent() << std::endl;

    return 0;
}