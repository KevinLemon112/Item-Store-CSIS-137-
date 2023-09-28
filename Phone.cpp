// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Phone.cpp

#include "Phone.h"
#include "Electronic.h"
#include <iostream>
#include <string>

using namespace std;

Phone::Phone(): rearCameraType("12 MP"), numApps(14), waterResRating("IP67")
{
    setItem("phone");
    setElectronicOrNot(1);
}

Phone::Phone(const string &theRearCameraType, const int &theNumApps, const string &theWaterResRating): rearCameraType(theRearCameraType), numApps(theNumApps), waterResRating(theWaterResRating)
{
    setItem("phone");
    setElectronicOrNot(1);
}

void Phone::setCameraType(const string &theRearCameraType)
{
    rearCameraType = theRearCameraType;
}

string Phone::getCameraType() const
{
    return rearCameraType;
}

void Phone::setNumApps(const int &theNumApps)
{
    numApps = theNumApps;
}

int Phone::getNumApps() const
{
    return numApps;
}

void Phone::setWaterResRating(const string &theWaterResRating)
{
    waterResRating = theWaterResRating;
}

string Phone::getWaterResRating() const
{
    return waterResRating;
}

double Phone::calculatePrice()
{
    return Electronic::calculatePrice();
}

ostream& operator<<(ostream& output, const Phone& thePhone)
{
        output << "Rear Camera Type: " << thePhone.getCameraType() << endl
               << "Number Of Apps: " << thePhone.getNumApps() << endl
               << "Water Resistance Rating: " << thePhone.getWaterResRating() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, Phone& thePhone)
{
    cout << "What is the rear camera type?" << endl;
    input >> thePhone.rearCameraType;

    cout << "What is the number of apps?" << endl;
    input >> thePhone.numApps;
    
    while (thePhone.getNumApps() < 0)
    {
        cout << "Number of apps must be positive, enter again:" << endl;
        input >> thePhone.numApps;
    }
    
    cout << "What is the water resistance rating" << endl;
    input >> thePhone.waterResRating;

    cout << endl;
    
    return input;
}

