// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// NonElectronic.h

#ifndef NonElectronic_h
#define NonElectronic_h
#include <string>
#include "StoreItems.h"

using namespace std;

class NonElectronic : public StoreItems
{
    friend ostream& operator<<(ostream&, const NonElectronic&);
    friend istream& operator>>(istream&, NonElectronic&);
    
   private:
    string brand;
    string material;
    string type;
    

   public:
    NonElectronic();
    NonElectronic(const string &, const string &, const string &);
    
    void setBrand(const string &);
    string getBrand() const;
    
    void setMaterial(const string &);
    string getMaterial() const;
    
    void setType(const string &);
    string getType() const;
    
    virtual double calculatePrice();

};

#endif 
