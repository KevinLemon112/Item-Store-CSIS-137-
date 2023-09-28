// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Phone.h

#ifndef Phone_h
#define Phone_h

#include <string>
#include "Electronic.h"

using namespace std;

class Phone : public Electronic
{
    friend ostream& operator<<(ostream&, const Phone&);
    friend istream& operator>>(istream&, Phone&);
    
   private:
     string rearCameraType;
     int numApps;
     string waterResRating;

   public:
    Phone();
    Phone(const string &, const int &, const string &);
    void setCameraType(const string &);
    string getCameraType() const;
    void setNumApps(const int &);
    int getNumApps() const;
    void setWaterResRating(const string &);
    string getWaterResRating() const;
    virtual double calculatePrice();
};


#endif
