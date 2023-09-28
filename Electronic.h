// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Electronic.h

#ifndef Electronic_h
#define Electronic_h

#include <string>
#include "StoreItems.h"

using namespace std;

class Electronic : public StoreItems
{
    friend ostream& operator<<(ostream&, const Electronic&);
    friend istream& operator>>(istream&, Electronic&);
    
   private:
    string model;
    string brand;

   public:
    Electronic();
    Electronic(const string &, const string &);
    void setModel(const string &);
    void setBrand(const string &);
    string getModel() const;
    string getBrand() const;
    virtual double calculatePrice();

};

#endif
