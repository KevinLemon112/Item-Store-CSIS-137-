    // Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// Electronic.cpp

#include "Electronic.h"
#include "StoreItems.h"
#include <iostream>
#include <string>

using namespace std;

Electronic::Electronic(): model("X"), brand("Apple")
{
    setElectronicOrNot(1);
}

Electronic::Electronic(const string &theModel, const string &theBrand): model(theModel), brand(theBrand)
{
    setElectronicOrNot(1);
}

void Electronic::setModel(const string &theModel)
{
    string tempModel = theModel;
    
    if( (getItem() == "iphone" || getItem() == "Iphone") && (getBrand() == "apple" || getBrand() == "Apple") )
    {
            while(tempModel != "7" && tempModel != "8" && tempModel != "X" && tempModel != "10" && tempModel != "11" && tempModel != "12" && tempModel != "13")
            {
                cout << "Model not available, re-enter a new IPhone model please: " << endl;
        
                cin >> tempModel;
            }
        
        model = tempModel;
    }
    
    else if( (getBrand() == "android" || getBrand() == "Android") )
    {
            while(tempModel != "google pixel 5a" && tempModel != "Google Pixel 5a" && tempModel != "oneplus 9" && tempModel != "OnePlus 9" && tempModel != "google pixel 6" && tempModel != "Google Pixel 6" && tempModel != "sumsung galaxy s21" && tempModel != "Sumsung Galaxy S21")
            {
                cout << "Model not available, re-enter a new Android model please: " << endl;
        
                cin >> tempModel;
            }
        
        model = tempModel;
    }
    
    else if( (getBrand() == "lg" || getBrand() == "LG") )
    {
            while(tempModel != "B1" && tempModel != "b1" && tempModel != "G1" && tempModel != "g1" && tempModel != "C1" && tempModel != "c1")
            {
                cout << "Model not available, re-enter a new TV model please: " << endl;
        
                cin >> tempModel;
            }
        
        model = tempModel;
    }
    
    else if( (getBrand() == "samsung" || getBrand() == "Samsung") )
    {
            while(tempModel != "QN90A" && tempModel != "qn90a" && tempModel!= "QN800A" && tempModel != "qn800a" && tempModel != "QN900A" && tempModel != "qn900a")
            {
                cout << "Model not available, re-enter a new TV model please: " << endl;
        
                cin >> tempModel;
            }
        
        model = tempModel;
    }
}

void Electronic::setBrand(const string &theBrand)
{
    string tempBrand = theBrand;
    
    if(getItem() == "phone" || getItem() == "Phone")
    {
    
        while(tempBrand != "apple" && tempBrand != "Apple" && tempBrand != "android" && tempBrand != "Android")
        {
            cout << "Brand not available, re-enter a new phone brand please: " << endl;

            cin >> tempBrand;
        }
    
        brand = tempBrand;
        
    }
    
    else if(getItem() == "television" || getItem() == "Television")
    {
    
        while(tempBrand != "lg" && tempBrand != "LG" && tempBrand != "samsung" && tempBrand != "Samsung")
        {
            cout << "Brand not available, re-enter a new television brand please: " << endl;

            cin >> tempBrand;
        }
    
        brand = tempBrand;
        
    }
}

string Electronic::getModel() const
{
    return model;
}

string Electronic::getBrand() const
{
    return brand;
}

double Electronic::calculatePrice()
{
        if( (getItem() == "phone" || getItem() == "Phone") )
        {
            if( (getBrand() == "apple" || getBrand() == "Apple") )
            {
                if(getModel() == "7")
                {
                    setPrice(449.0);
                }
            
                else if(getModel() == "8")
                {
                    setPrice(599.0);
                }
            
                else if(getModel() == "X" || getModel() == "10")
                {
                    setPrice(760.0);
                }
            
                else if(getModel() == "11")
                {
                    setPrice(850.0);
                }
                
                else if(getModel() == "12")
                {
                    setPrice(950.0);
                }
            
                else if(getModel() == "13")
                {
                    setPrice(1150.0);
                }
            }
        
            else if( (getBrand() == "android" || getBrand() == "Android") )
            {
                if( (getModel() == "google pixel 5a" || getModel() == "Google Pixel 5a") )
                {
                    setPrice(500.0);
                }
            
                else if( (getModel() == "oneplus 9" || getModel() == "OnePlus 9") )
                {
                    setPrice(650.0);
                }
            
                else if( (getModel() == "google pixel 6" || getModel() == "Google Pixel 6") )
                {
                    setPrice(900.0);
                }
            
                else if( (getModel() == "sumsung galaxy s21" || getModel() == "Sumsung Galaxy S21") )
                {
                    setPrice(1120.0);
                }

            }
        
        }
    
        else if( (getItem() == "television" || getItem() == "Television") )
        {
            if( (getBrand() == "LG" || getBrand() == "lg") )
            {
                if(getModel() == "B1" || getModel() == "b1")
                {
                    setPrice(2299.99);
                }
                
                else if(getModel() == "G1" || getModel() == "g1")
                {
                    setPrice(2399.99);
                }
            
                else if(getModel() == "C1" || getModel() == "c1")
                {
                    setPrice(4999.99);
                }
            }
            
            else if( (getBrand() == "samsung" || getBrand() == "Samsung") )
            {
                if(getModel() == "QN90A" || getModel() == "qn90a")
                {
                    setPrice(1199.99);
                }
                
                else if(getModel() == "QN800A" || getModel() == "qn800a")
                {
                    setPrice(2499.99);
                }
            
                else if(getModel() == "QN900A" || getModel() == "qn900a")
                {
                    setPrice(3299.99);
                }
            }
        }
    
    return getPrice();
}

ostream& operator<<(ostream& output, const Electronic& theElectronic)
{
        output << "Model: " << theElectronic.getModel() << endl
               << "Brand: " << theElectronic.getBrand() << "\n\n";
        
        return output;
}

istream& operator>>(istream& input, Electronic& theElectronic)
{
    cout << "What is the brand?" << endl;
    input >> theElectronic.brand;
    
    cout << "What is the model?" << endl;
    input >> theElectronic.model;

    cout << endl;
    
    return input;
}
