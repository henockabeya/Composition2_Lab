//
// Created by Henoc Kabeya on 11/15/26.
//

#ifndef COMPOSITION2_LAB_BOOK_H
#define COMPOSITION2_LAB_BOOK_H

#include <iostream>
#include <string>

#include "Page.h"
using namespace std;

class Book {
    public:
    Book();
    Book(const string& t, const string& a);
    void setTitle(const string& t);
    string getTitle() const;
    void setAuthor(const string& a);
    string getAuthor() const;
    void setPageDetails(int pageNum, const string& pageContent);
    int getCurrentPageNumber() const;
    string getCurrentPageContent() const;

    private:
    string title;
    string author;
    Page currentPage;
};

#endif //COMPOSITION2_LAB_BOOK_H
