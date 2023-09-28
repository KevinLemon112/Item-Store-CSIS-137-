// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Book.cpp

#include "Book.h"
#include "NonElectronic.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book(): numPages(129), numChapters(10), author("J. K. Rowling"), title("Harry Potter and the Deathly Hallows")
{
    setItem("book");
    setElectronicOrNot(0);
}

Book::Book(const int &theNumPages, const int &theNumChapters, const string &theAuthor, const string &theTitle): numPages(theNumPages), numChapters(theNumChapters), author(theAuthor), title(theTitle)
{
    setItem("book");
    setElectronicOrNot(0);
}

void Book::setNumPages(const int &theNumPages)
{
    numPages = theNumPages;
}

int Book::getNumPages() const
{
    return numPages;
}

void Book::setNumChapters(const int &theNumChapters)
{
    numChapters = theNumChapters;
}

int Book::getNumChapters() const
{
    return numChapters;
}

void Book::setAuthor(const string &theAuthor)
{
    author = theAuthor;
}

string Book::getAuthor() const
{
    return author;
}

void Book::setTitle(const string &theTitle)
{
    title = theTitle;
}

string Book::getTitle() const
{
    return title;
}

double Book::calculatePrice()
{
    return NonElectronic::calculatePrice();
}

ostream& operator<<(ostream& output, const Book& theBook)
{
        output << "Number Of Pages: " << theBook.getNumPages() << endl
               << "Number of Chapters: " << theBook.getNumChapters() << endl
               << "Author: " << theBook.getAuthor() << endl
               << "Book Title: " << theBook.getTitle() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, Book& theBook)
{
    cout << "How many pages?" << endl;
    input >> theBook.numPages;

    cout << "How many chapters?" << endl;
    input >> theBook.numChapters;
    
    cout << "Who is the author?" << endl;
    input >> theBook.author;
    
    cout << "What is the book title?" << endl;
    input >> theBook.title;

    cout << endl;
    
    return input;
}

