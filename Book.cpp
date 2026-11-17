//
// Created by Henoc Kabeya on 11/15/26.
//
#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(): title("Untitled"), author("Unknown") {}

Book::Book(const string& t, const string& a): title(t), author(a) {}

void Book::setTitle(const string& t) {
    title = t;
}

string Book::getTitle() const {
    return title;
}

void Book::setAuthor(const string& a) {
    author = a;
}

string Book::getAuthor() const {
    return author;
}

void Book::setPageDetails(int pageNum, const string& pageContent) {
    currentPage.setPageNumber(pageNum);
    currentPage.setContent(pageContent);
}

int Book::getCurrentPageNumber() const {
    return currentPage.getPageNumber();
}

string Book::getCurrentPageContent() const {
    return currentPage.getContent();
}


