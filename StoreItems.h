// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// StoreItems.h

#ifndef StoreItems_h
#define StoreItems_h

#include <string>
#include <vector>
#include <iterator>


using namespace std;

class StoreItems
{
    friend ostream& operator<<(ostream&, const StoreItems&);
    friend istream& operator>>(istream&, StoreItems&);
    
   private:
     string item;
     double inchLength;
     double inchWidth;
     double gramWeight;
     int electronicOrNot;
     double price;
     string color;
     vector<StoreItems> vect;
     vector<StoreItems>::iterator iter = vect.begin();
    
   public:
    StoreItems();
    StoreItems(const string &, const double &, const double &, const double &, const int &, const double &, const string &);
    void setItem(const string &);
    void setInchLength(const double &);
    void setInchWidth(const double &);
    void setgramWeight(const double &);
    void setPrice(const double &);
    void setColor(const string &);
    void setElectronicOrNot(const int &);
    
    void addItem(const StoreItems &);
    void removeItem(const int &);
    void printVect();
    void clearVect();
    
    string getItem() const;
    double getPrice() const;
    double getInchLength() const;
    double getInchWidth() const;
    double getGramWeight() const;
    int getElectronicOrNot() const;
    string getColor() const;
    int getVectSize() const;
    vector<StoreItems> getVector() const;
    
    double calculatePriceOfSingle(const int &);
    virtual double calculatePrice();

};


#endif
