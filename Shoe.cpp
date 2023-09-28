// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Shoe.cpp


#include "Shoe.h"
#include "NonElectronic.h"
#include <iostream>
#include <string>

using namespace std;

Shoe::Shoe(): shoeSize(6), inchLaceLength(36), laceColor("White"), overallShoeColor("Black")
{
    setItem("shoe");
    setElectronicOrNot(0);
}

Shoe::Shoe(const double &theShoeSize, const double &theInchLaceLength, const string &theLaceColor, const string &theOverallShoeColor): shoeSize(theShoeSize), inchLaceLength(theInchLaceLength), laceColor(theLaceColor), overallShoeColor(theOverallShoeColor)
{
    setItem("shoe");
    setElectronicOrNot(0);
}

void Shoe::setShoeSize(const double &theShoeSize)
{
    shoeSize = theShoeSize;
}

double Shoe::getShoeSize() const
{
    return shoeSize;
}

void Shoe::setLaceLength(const double &theInchLaceLength)
{
    inchLaceLength = theInchLaceLength;
}

double Shoe::getLaceLength() const
{
    return inchLaceLength;
}

void Shoe::setLaceColor(const string &theLaceColor)
{
    laceColor = theLaceColor;
}

string Shoe::getLaceColor() const
{
    return laceColor;
}

void Shoe::setOverallShoeColor(const string &theOverallShoeColor)
{
    overallShoeColor = theOverallShoeColor;
}

string Shoe::getOverallShoeColor() const
{
    return overallShoeColor;
}

double Shoe::calculatePrice()
{
    return NonElectronic::calculatePrice();
}

ostream& operator<<(ostream& output, const Shoe& theShoe)
{
        output << "Shoe Size: " << theShoe.getShoeSize() << endl
               << "Lace Length: " << theShoe.getLaceLength() << endl
               << "Lace Color: " << theShoe.getLaceColor() << endl
               << "Shoe Color: " << theShoe.getOverallShoeColor() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, Shoe& theShoe)
{
    cout << "What is the shoe size?" << endl;
    input >> theShoe.shoeSize;

    cout << "What is the lace length of the shoe?" << endl;
    input >> theShoe.inchLaceLength;
    
    cout << "What color are the shoelaces?" << endl;
    input >> theShoe.laceColor;
    
    cout << "What color is the shoe?" << endl;
    input >> theShoe.overallShoeColor;

    cout << endl;
    
    return input;
}

