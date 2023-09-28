// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Television.cpp

#include "Television.h"
#include "Electronic.h"
#include <iostream>
#include <string>

using namespace std;

Television::Television(): maxResolution("1440 P"), maxHertz(144), usbNum(2), hdmiNum(2)
{
    setItem("television");
    setElectronicOrNot(1);
}

Television::Television(const string &theMaxResolution, const int &theMaxHertz, const int &theUsbNum, const int &theHdmiNum): maxResolution(theMaxResolution), maxHertz(theMaxHertz), usbNum(theUsbNum), hdmiNum(theHdmiNum)
{
    setItem("television");
    setElectronicOrNot(1);
}

void Television::setMaxResolution(const int &theMaxResolution)
{
    maxResolution = theMaxResolution;
}

string Television::getMaxResolution() const
{
    return maxResolution;
}

void Television::setMaxHertz(const int &theMaxHertz)
{
    maxHertz = theMaxHertz;
}

int Television::getMaxHertz() const
{
    return maxHertz;
}

void Television::setUsbNum(const int &theUsbNum)
{
    usbNum = theUsbNum;
}

int Television::getUsbNum() const
{
    return usbNum;
}

void Television::setHdmiNum(const int &theHdmiNum)
{
    hdmiNum = theHdmiNum;
}

int Television::getHdmiNum() const
{
    return hdmiNum;
}

double Television::calculatePrice()
{
    return Electronic::calculatePrice();
}

ostream& operator<<(ostream& output, const Television& theTelevision)
{
        output << "Max Resolution: " << theTelevision.getMaxResolution() << endl
               << "Max Hertz: " << theTelevision.getMaxHertz() << endl
               << "Number Of USB Ports: " << theTelevision.getUsbNum()
               << "Number Of HDMI Ports: " << theTelevision.getHdmiNum() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, Television& theTelevision)
{
    cout << "What is the max resolution?" << endl;
    input >> theTelevision.maxResolution;

    cout << "What is the max hertz? (enter only a number)" << endl;
    input >> theTelevision.maxHertz;

    cout << "How many usb ports?" << endl;
    input >> theTelevision.usbNum;
    
    while (theTelevision.getUsbNum() < 0)
    {
        cout << "Number of hdmi port must be positive, enter again:" << endl;
        input >> theTelevision.usbNum;
    }
    
    cout << "How many hdmi ports?" << endl;
    input >> theTelevision.hdmiNum;
    
    while (theTelevision.getHdmiNum() < 0)
    {
        cout << "Number of hdmi port must be positive, enter again:" << endl;
        input >> theTelevision.hdmiNum;
    }

    cout << endl;
    
    return input;
}

