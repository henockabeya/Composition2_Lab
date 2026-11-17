//
// Created by Henoc Kabeya on 11/15/26.
//

#include "Page.h"
#include <iostream>
using namespace std;

Page::Page() {
    pageNumber = 0;
    content = "Empty Page";
}
Page::Page (int num, const string& text) {
    pageNumber = num;
    content = text;
}
void Page::setPageNumber (int num) {
    pageNumber = num;
}
int Page::getPageNumber () const{
    return pageNumber;
}
void Page::setContent(const string& text) {
    content = text;
}
string Page::getContent () const {
    return content;
}
