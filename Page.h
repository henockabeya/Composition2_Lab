//
// Created by Henoc Kabeya on 11/15/26.
//

#ifndef COMPOSITION2_LAB_PAGE_H
#define COMPOSITION2_LAB_PAGE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Page {
    public:
        Page ();
        Page (int num, const string& text);
        void setPageNumber (int num);
        int getPageNumber () const;
        void setContent (const string& text);
        string getContent () const;
    private:
    int pageNumber;
    string content;

};

#endif //COMPOSITION2_LAB_PAGE_H
