// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Book.h

#ifndef Book_h
#define Book_h

#include <string>
#include "NonElectronic.h"

using namespace std;

class Book : public NonElectronic
{
    friend ostream& operator<<(ostream&, const Book&);
    friend istream& operator>>(istream&, Book&);
    
   private:
     int numPages;
     int numChapters;
     string author;
     string title;

   public:
    Book();
    Book(const int &, const int &, const string &, const string &);
    
    void setNumPages(const int &);
    int getNumPages() const;
    
    void setNumChapters(const int &);
    int getNumChapters() const;
    
    void setAuthor(const string &);
    string getAuthor() const;
    
    void setTitle(const string &);
    string getTitle() const;
    
    virtual double calculatePrice();

};

#endif
