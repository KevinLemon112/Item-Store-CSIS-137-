// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// StoreItems.cpp

#include "StoreItems.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

StoreItems::StoreItems(): item("Phone"), inchLength(5.65), inchWidth(2.79), gramWeight(150), electronicOrNot(0), price(0.0), color("Blue")
{

}

StoreItems::StoreItems(const string &theItem, const double &theLength, const double &theWidth, const double &theGramWeight, const int &eOrNot, const double &thePrice, const string &theColor): item(theItem), inchLength(theLength), inchWidth(theWidth), gramWeight(theGramWeight), electronicOrNot(eOrNot), price(thePrice), color(theColor)
{

}

ostream& operator<<(ostream& output, const StoreItems& theStoreItems)
{
        output << "Item: " << theStoreItems.getItem() << endl
               << "Inch Length: " << theStoreItems.getInchLength() << endl
               << "Inch Width: " << theStoreItems.getInchWidth() << endl
               << "Gram Weight: " << theStoreItems.getGramWeight() << endl
               << "Electronic Or Not (1 = E, 0 = Non-E): " << theStoreItems.getElectronicOrNot() << endl
               << "Price: $" << theStoreItems.getPrice() << endl
               << "Color: " << theStoreItems.getColor() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, StoreItems& theStoreItems)
{
    cout << "Just to clarify: What is the item?" << endl;
    input >> theStoreItems.item;
    
    while (theStoreItems.getItem() != "Phone" && theStoreItems.getItem() != "phone" && theStoreItems.getItem() != "Book" && theStoreItems.getItem() != "book" && theStoreItems.getItem() != "Shoe" && theStoreItems.getItem() != "shoe" && theStoreItems.getItem() != "Television" && theStoreItems.getItem() != "television")
    {
        cout << "Item not found, renter new item: " << endl;
        input >> theStoreItems.item;
    }
    
    cout << "What is the item's inch length?" << endl;
    input >> theStoreItems.inchLength;

    while (theStoreItems.getInchLength() < 0)
    {
        cout << "Please enter a positive inch length: " << endl;
        input >> theStoreItems.inchLength;
    }

    cout << "What is the item's inch width?" << endl;
    input >> theStoreItems.inchWidth;

    while (theStoreItems.getInchWidth() < 0)
    {
        cout << "Please enter a positive inch width: " << endl;
        input >> theStoreItems.inchWidth;
    }
    
    cout << "What is the item's gram weight?" << endl;
    input >> theStoreItems.gramWeight;

    while (theStoreItems.getGramWeight() < 0)
    {
        cout << "Please enter a positive gram weight: " << endl;
        input >> theStoreItems.gramWeight;
    }
    
    cout << "Is the item electronic or non-electronic? (1 for elec., 0 for non-elec.)" << endl;
    input >> theStoreItems.electronicOrNot;
    
    while ( (theStoreItems.getElectronicOrNot() != 0) && (theStoreItems.getElectronicOrNot() != 1) )
    {
        cout << "Please re-enter a number (1 for elec., 0 for non-elec.) to specify if the item is electronic or non-electronic: " << endl;
        input >> theStoreItems.electronicOrNot;
    }

    cout << "What is the item's color?" << endl;
    input >> theStoreItems.color;

    cout << endl;
    
    return input;
}

void StoreItems::setItem(const string &theItem)
{
    string tempItem = theItem;
    
    if(getElectronicOrNot() == 1)
    {
    
        while(tempItem != "phone" && tempItem != "Phone" && tempItem != "television" && tempItem != "Television")
        {
            cout << "Electronic item not available, re-enter a new Electronic item please: " << endl;
        
            cin >> tempItem;
        }
        
        item = tempItem;
        
    }
    
    else if(getElectronicOrNot() == 0)
    {
    
        while(tempItem != "book" && tempItem != "Book" && tempItem != "shoe" && tempItem != "Shoe")
        {
            cout << "Non-Electronic item not available, re-enter a new Non-Electronic item please: " << endl;
        
            cin >> tempItem;
        }
        
        item = tempItem;
        
    }
}

void StoreItems::setInchLength(const double &theLength)
{
    inchLength = theLength;
}

void StoreItems::setInchWidth(const double &theWidth)
{
    inchWidth = theWidth;
}

void StoreItems::setgramWeight(const double &theGramWeight)
{
    gramWeight = theGramWeight;
}

void StoreItems::setPrice(const double &thePrice)
{
    price = thePrice;
}

void StoreItems::setElectronicOrNot(const int &eOrNot)
{
    electronicOrNot = eOrNot;
}

void StoreItems::setColor(const string &theColor)
{
    color = theColor;
}

string StoreItems::getItem() const
{
    return item;
}

double StoreItems::getInchLength() const
{
    return inchLength;
}

double StoreItems::getInchWidth() const
{
    return inchWidth;
}

double StoreItems::getGramWeight() const
{
    return gramWeight;
}

string StoreItems::getColor() const
{
    return color;
}

double StoreItems::getPrice() const
{
    return price;
}

int StoreItems::getElectronicOrNot() const
{
    return electronicOrNot;
}

int StoreItems::getVectSize() const
{
    return (int)vect.size();
}

void StoreItems::addItem(const StoreItems &thisItem)
{
    vect.push_back(thisItem);
}

void StoreItems::removeItem(const int &position)
{
    if(position < getVectSize())
    {
        vect.erase(vect.begin() + position);
    
        cout << "\nStoreItem #" << position+1 << " has been removed\n\n";
    }
    
    else
    {
        cout << "\nElement not in vector\n" << endl;
    }
}

void StoreItems::printVect()
{
    cout << "Vector elements are: \n\n";
    
    for (iter = vect.begin(); iter != vect.end(); iter++)
    {
        cout << *iter;
        cout << endl;
    }
}

void StoreItems::clearVect()
{
    vect.clear();
}

vector<StoreItems> StoreItems::getVector() const
{
    return vect;
}

double StoreItems::calculatePriceOfSingle(const int &num)
{
    double priceNum = 0;
    
    for(int i = num; i < num+1; i++)
    {
        if(vect[i].getGramWeight() > 100)
        {
            priceNum += 100.0;
        }
    
        else if(vect[i].getGramWeight() < 100)
        {
            priceNum += 50.0;
        }
    
        else if(vect[i].getGramWeight() == 100)
        {
            if(vect[i].getInchLength() > 5 && vect[i].getInchWidth() > 5)
            {
                priceNum += 85.0;
            }
        
            else if(vect[i].getInchLength() < 5 && vect[i].getInchWidth() < 5)
            {
                priceNum += 60.0;
            }
        
            else if(vect[i].getInchLength() > 5 && vect[i].getInchWidth() < 5)
            {
                priceNum += 75.0;
            }
            
            else if(vect[i].getInchLength() < 5 && vect[i].getInchWidth() > 5)
            {
                priceNum += 65.0;
            }
        }
    }

    return priceNum;
}


double StoreItems::calculatePrice()
{
    for(int i = 0; i < vect.size(); i++)
    {
        iter = vect.begin();
        
        if(iter->getGramWeight() > 100)
        {
            price += 100.0;
            iter++;
        }
    
        else if(iter->getGramWeight() < 100)
        {
            price += 50.0;
            iter++;
        }
    
        else if(iter->getGramWeight() == 100)
        {
            if(iter->getInchLength() > 5 && iter->getInchWidth() > 5)
            {
                price += 85.0;
                iter++;
            }
        
            else if(iter->getInchLength() < 5 && iter->getInchWidth() < 5)
            {
                price += 60.0;
                iter++;
            }
        
            else if(iter->getInchLength() > 5 && iter->getInchWidth() < 5)
            {
                price += 75.0;
                iter++;
            }
            
            else if(iter->getInchLength() < 5 && iter->getInchWidth() > 5)
            {
                price += 65.0;
                iter++;
            }
        }
    }
    
    setPrice(price);
    
    return price;
}
