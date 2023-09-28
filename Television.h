// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Television.h

#ifndef Television_h
#define Television_h

#include <string>
#include "Electronic.h"

using namespace std;

class Television : public Electronic
{
    friend ostream& operator<<(ostream&, const Television&);
    friend istream& operator>>(istream&, Television&);
    
   private:
    string maxResolution;
    int maxHertz;
    int usbNum;
    int hdmiNum;


   public:
    Television();
    Television(const string &, const int &, const int &, const int &);
    void setMaxResolution(const int &);
    string getMaxResolution() const;
    void setMaxHertz(const int &);
    int getMaxHertz() const;
    void setUsbNum(const int &);
    int getUsbNum() const;
    void setHdmiNum(const int &);
    int getHdmiNum() const;
    virtual double calculatePrice();

};

#endif
