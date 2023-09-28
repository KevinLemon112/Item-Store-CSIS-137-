// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// NonElectronic.cpp

#include "NonElectronic.h"
#include <iostream>
#include <string>

using namespace std;

NonElectronic::NonElectronic(): brand("Nike"), material("plastic"), type("Air Force 1")
{
    setElectronicOrNot(0);
}

NonElectronic::NonElectronic(const string &theBrand, const string &theMaterial, const string &theType): brand(theBrand), material(theMaterial), type(theType)
{
    setElectronicOrNot(0);
}

void NonElectronic::setBrand(const string &theBrand)
{
    string tempBrand = theBrand;
    
    if( (getItem() == "shoe" || getItem() == "Shoe") )
    {
        while(getBrand() != "jordan" && getBrand() != "Jordan" && getBrand() != "nike" && getBrand() != "Nike" && getBrand() != "adidas" && getBrand() != "Adidas")
        {
            cout << "Brand not available, re-enter a new shoe brand please: " << endl;
    
            cin >> tempBrand;
        }
        
        brand = tempBrand;
    }
    
    else if(getItem() == "book" || getItem() == "Book")
    {
    
        while(tempBrand != "fiction" && tempBrand != "Fiction" && tempBrand != "non-fiction" && tempBrand != "Non-Fiction")
        {
            cout << "Brand not available, re-enter a new book brand please: " << endl;

            cin >> tempBrand;
        }
    
        brand = tempBrand;
        
    }
}

void NonElectronic::setMaterial(const string &theMaterial)
{
    material = theMaterial;
}

void NonElectronic::setType(const string &theType)
{
    string tempType = theType;
    
    if( (getItem() == "shoe" || getItem() == "Shoe") && (getBrand() == "nike" || getBrand() == "Nike") )
    {
        while(tempType != "Nike Air Presto" && tempType != "nike air Presto" && tempType != "Nike Air Force 1" && tempType != "Nike Air Force One" && tempType != "Nike Air Huarache" && tempType != "nike air huarache")
        {
            cout << "Nike Shoe Type not available, re-enter a new Nike Shoe type please: " << endl;

            cin >> tempType;
        }
        
        type = tempType;
    }
    
    else if( (getItem() == "shoe" || getItem() == "Shoe") && (getBrand() == "adidas" || getBrand() == "Adidas") )
    {
        while(tempType != "Racer TR21" && tempType != "racer tr21" && tempType != "Kaptir Super 1" && tempType != "kaptir super" && tempType != "Ultra Boost 21" && tempType != "ultra boost 21")
        {
            cout << "Adidas Shoe Type not available, re-enter a new Adidas Shoe type please: " << endl;

            cin >> tempType;
        }
        
        type = tempType;
    }
    
    else if( (getItem() == "shoe" || getItem() == "Shoe") && (getBrand() == "jordan" || getBrand() == "Jordan") )
    {
        while(tempType != "Jordan MA2" && tempType != "jordan ma2" && tempType != "Air Jordan 1 Mid" && tempType != "air jordan 1 mid" && tempType != "Air Jordan 11" && tempType != "air jordan 11")
        {
            cout << "Jordan Shoe Type not available, re-enter a new Jordan Shoe type please: " << endl;
    
            cin >> tempType;
        }
        
        type = tempType;
    }
    
    else if( (getItem() == "book" || getItem() == "Book") && (getBrand() == "fiction" || getBrand() == "Fiction") )
    {
        while(tempType != "It Ends with Us" && tempType != "it ends with us" && tempType != "Apples Never Fall" && tempType != "apples never fall")
        {
            cout << "Fiction Book Type not available, re-enter a new Fiction Book Type type please: " << endl;

            cin >> tempType;
        }
        
        type = tempType;
    }
    
    else if( (getItem() == "book" || getItem() == "Book") && (getBrand() == "non-Fiction" || getBrand() == "Non-Fiction") )
    {
        while(tempType != "The Phsychopath Inside" && tempType != "the phsychopath inside" && tempType != "No One Would Listen" && tempType != "no one would listen")
        {
            cout << "Fiction Book Type not available, re-enter a new Fiction Book Type type please: " << endl;
    
            cin >> tempType;
        }
        
        type = tempType;
    }
    
}

string NonElectronic::getBrand() const
{
    return brand;
}

string NonElectronic::getMaterial() const
{
    return material;
}

string NonElectronic::getType() const
{
    return type;
}

double NonElectronic::calculatePrice()
{
        if( (getItem() == "shoe" || getItem() == "Shoe") )
        {
            if( (getBrand() == "nike" || getBrand() == "Nike") )
            {
                if(getType() == "Nike Air Force 1" || getType() == "Nike Air Force One")
                {
                    setPrice(90.0);
                }
            
                else if(getType() == "Nike Air Huarache" || getType() == "nike air huarache")
                {
                    setPrice(120.0);
                }
            
                else if(getType() == "Nike Air Presto" || getType() == "nike air Presto")
                {
                    setPrice(130.0);
                }
            }
            
            else if( (getBrand() == "adidas" || getBrand() == "Adidas") )
            {
                if(getType() == "Racer TR21" || getType() == "racer tr21")
                {
                    setPrice(75.0);
                }
                
                else if(getType() == "Kaptir Super" || getType() == "kaptir super")
                {
                    setPrice(90.0);
                }
                    
                else if(getType() == "Ultra Boost 21" || getType() == "ultra boost 21")
                {
                    setPrice(135.0);
                }
            }
        
            else if( (getBrand() == "Jordan" || getBrand() == "jordan") )
            {
                if(getType() == "Jordan MA2" || getType() == "jordan ma2")
                {
                    setPrice(125.0);
                }
                
                else if(getType() == "Air Jordan 1 Mid" || getType() == "air jordan 1 mid")
                {
                    setPrice(130.0);
                }
                
                else if(getType() == "Air Jordan 11" || getType() == "air jordan 11")
                {
                    setPrice(225.0);
                }
            }
    
        }
        
        else if( (getItem() == "book" || getItem() == "Book") )
        {
            if(brand == "fiction" || brand == "Fiction")
            {
                if(type == "It Ends with Us" || type == "it ends with us")
                {
                    setPrice(12.0);
                }
                
                else if(type == "Apples Never Fall" || type == "apples never fall")
                {
                    setPrice(15.0);
                }
            }
        
            else if(brand == "non-fiction" || brand == "Non-Fiction")
            {
                if(type == "The Phsychopath Inside" || type == "the phsychopath inside")
                {
                    setPrice(16.0);
                }
                
                else if(type == "No One Would Listen" || type == "no one would listen")
                {
                    setPrice(25.0);
                }
            }
        }
    
    return getPrice();
}

ostream& operator<<(ostream& output, const NonElectronic& theNonElectronic)
{
        output << "Brand: " << theNonElectronic.getBrand() << endl
               << "Material: " << theNonElectronic.getMaterial() << endl
               << "Type: " << theNonElectronic.getType() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, NonElectronic& theNonElectronic)
{
    cout << "What is the brand?" << endl;
    input >> theNonElectronic.brand;
    
    if( (theNonElectronic.getItem() == "shoe" || theNonElectronic.getItem() == "Shoe") )
    {
        while(theNonElectronic.getBrand() != "jordan" && theNonElectronic.getBrand() != "Jordan" && theNonElectronic.getBrand() != "nike" && theNonElectronic.getBrand() != "Nike" && theNonElectronic.getBrand() != "adidas" && theNonElectronic.getBrand() != "Adidas")
        {
            cout << "Brand not available, re-enter a new shoe brand please: " << endl;
    
            input >> theNonElectronic.brand;
        }
    }
    
    else if(theNonElectronic.getItem() == "book" || theNonElectronic.getItem() == "Book")
    {
        while(theNonElectronic.getBrand() != "fiction" && theNonElectronic.getBrand() != "Fiction" && theNonElectronic.getBrand() != "non-fiction" && theNonElectronic.getBrand() != "Non-Fiction")
        {
            cout << "Brand not available, re-enter a new book brand please: " << endl;

            input >> theNonElectronic.brand;
        }
    }

    cout << "What is the material" << endl;
    input >> theNonElectronic.material;
    
    cout << "What is the type?" << endl;
    input >> theNonElectronic.type;
    
    if( (theNonElectronic.getItem() == "shoe" || theNonElectronic.getItem() == "Shoe") && (theNonElectronic.getBrand() == "nike" || theNonElectronic.getBrand() == "Nike") )
    {
        while(theNonElectronic.getType() != "Nike Air Presto" && theNonElectronic.getType() != "nike air Presto" && theNonElectronic.getType() != "Nike Air Force 1" && theNonElectronic.getType() != "Nike Air Force One" && theNonElectronic.getType() != "Nike Air Huarache" && theNonElectronic.getType() != "nike air huarache")
        {
            cout << "Nike Shoe Type not available, re-enter a new Nike Shoe type please: " << endl;

            input >> theNonElectronic.type;
        }
    }
    
    else if( (theNonElectronic.getItem() == "shoe" || theNonElectronic.getItem() == "Shoe") && (theNonElectronic.getBrand() == "adidas" || theNonElectronic.getBrand() == "Adidas") )
    {
        while(theNonElectronic.getType() != "Racer TR21" && theNonElectronic.getType() != "racer tr21" && theNonElectronic.getType() != "Kaptir Super 1" && theNonElectronic.getType() != "kaptir super" && theNonElectronic.getType() != "Ultra Boost 21" && theNonElectronic.getType() != "ultra boost 21")
        {
            cout << "Adidas Shoe Type not available, re-enter a new Adidas Shoe type please: " << endl;

            input >> theNonElectronic.type;
        }
    }
    
    else if( (theNonElectronic.getItem() == "shoe" || theNonElectronic.getItem() == "Shoe") && (theNonElectronic.getBrand() == "jordan" || theNonElectronic.getBrand() == "Jordan") )
    {
        while(theNonElectronic.getType() != "Jordan MA2" && theNonElectronic.getType() != "jordan ma2" && theNonElectronic.getType() != "Air Jordan 1 Mid" && theNonElectronic.getType() != "air jordan 1 mid" && theNonElectronic.getType() != "Air Jordan 11" && theNonElectronic.getType() != "air jordan 11")
        {
            cout << "Jordan Shoe Type not available, re-enter a new Jordan Shoe type please: " << endl;
    
            input >> theNonElectronic.type;
        }
    }
    
    else if( (theNonElectronic.getItem() == "book" || theNonElectronic.getItem() == "Book") && (theNonElectronic.getBrand() == "fiction" || theNonElectronic.getBrand() == "Fiction") )
    {
        while(theNonElectronic.getType() != "It Ends with Us" && theNonElectronic.getType() != "it ends with us" && theNonElectronic.getType() != "Apples Never Fall" && theNonElectronic.getType() != "apples never fall")
        {
            cout << "Fiction Book Type not available, re-enter a new Fiction Book Type type please: " << endl;

            input >> theNonElectronic.type;
        }
    }
    
    else if( (theNonElectronic.getItem() == "book" || theNonElectronic.getItem() == "Book") && (theNonElectronic.getBrand() == "non-Fiction" || theNonElectronic.getBrand() == "Non-Fiction") )
    {
        while(theNonElectronic.getType() != "The Phsychopath Inside" && theNonElectronic.getType() != "the phsychopath inside" && theNonElectronic.getType() != "No One Would Listen" && theNonElectronic.getType() != "no one would listen")
        {
            cout << "Fiction Book Type not available, re-enter a new Fiction Book Type type please: " << endl;
    
            input >> theNonElectronic.type;
        }
    }

    cout << endl;
    
    return input;
}

