// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Shoe.h

#ifndef Shoe_h
#define Shoe_h

#include <string>
#include "NonElectronic.h"

using namespace std;

class Shoe : public NonElectronic
{
    friend ostream& operator<<(ostream&, const Shoe&);
    friend istream& operator>>(istream&, Shoe&);
    
   private:
    double shoeSize;
    double inchLaceLength;
    string laceColor;
    string overallShoeColor;


   public:
    Shoe();
    Shoe(const double &, const double &, const string &, const string &);
    
    void setShoeSize(const double &);
    double getShoeSize() const;
    
    void setLaceLength(const double &);
    double getLaceLength() const;
    
    void setLaceColor(const string &);
    string getLaceColor() const;
    
    void setOverallShoeColor(const string &);
    string getOverallShoeColor() const;
    virtual double calculatePrice();

};

#endif
