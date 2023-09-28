// Kevin Babakhani
// CSIS 137 - Fall 2021 online course
// Final Project
// 11/23/2021
// main.cpp

#include <iostream>
#include "StoreItems.h"
#include "Electronic.h"
#include "Phone.h"
#include "Television.h"
#include "NonElectronic.h"
#include "Book.h"
#include "Shoe.h"
#include <string>
#include <fstream>
#include <stdexcept>

using namespace std;


int main()
{
    int userNum;
    
    char selection = 'p';
    
    StoreItems allItems;
    
    cout << "Welcome to the virutal store!" << endl;
    
    cout << "To begin, we must make sure you are not a robot, please enter a number from 1 to 10" << endl;
    
    cin >> userNum;

    try
    {
        if(userNum < 1 || userNum > 10)
        {
            throw userNum;
        }
    }
    
    catch(int userNum)
    {
        while(userNum < 1 || userNum > 10)
        {
            cout << "\nYou entered " << userNum << endl;
            
            cout << "Number not between 1 to 10, try again." << endl;
            
            cin >> userNum;
        }
    }
    
    cout << "\nGreat job, let's proceed to the menu selection!\n" << endl;
    
    do
    {
        cout << "STORE ENTRY:" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "1) Add item to cart" << endl;
        cout << "2) Remove item from cart" << endl;
        cout << "3) Reveal all items in your cart via a file" << endl;
        cout << "4) Reveal price of an item of your choice (in the cart)" << endl;
        cout << "5) Purchase items (reveal price of entire cart)" << endl;
        cout << "6) Print your entire cart" << endl;
        cout << "Q or q) Leave the store" << endl;
        cin >> selection;

        if (selection == '1')
        {
            string item = "";
            
            cout << "\nGreat! What kind of item would you like to buy? (choose phone, television, book, or shoe please)\n" << endl;
            
            cin >> item;
            
            cout << endl;
            
            while(item != "phone" && item != "Phone" && item != "television" && item != "Television" && item != "book" && item != "Book" && item != "shoe" && item != "Shoe")
            {
                cout << "Item not in stock, please select another item (choose phone, television, book, or shoe please)" << endl;
                
                cin >> item;
            }
            
            if(item == "phone" || item == "Phone")
            {
                Phone p;

                cin >> p;

                allItems.addItem(p);
            }
            
            else if(item == "television" || item == "Television")
            {
                Television t;
                
                cin >> t;
       
                allItems.addItem(t);
            }
            
            else if(item == "book" || item == "Book")
            {
                Book b;
                
                cin >> b;

                allItems.addItem(b);
            }
            
            else if(item == "shoe" || item == "Shoe")
            {
                Shoe s;
                
                cin >> s;
                
                allItems.addItem(s);
            }
        }
       
        else if (selection == '2')
        {
            int position = 99;
            
            cout << "\nGreat! Input a number for the position in relation to your cart for an item that you would like to remove (positions start at 0)\n" << endl;
            
            cin >> position;
            
            allItems.removeItem(position);
        }
        
        else if (selection == '3')
        {
            ofstream outputFile("StoreItems.txt", ios::out);
            
            string fileName;
            string items;
            
            for(int i = 0; i < allItems.getVectSize(); i++)
            {
                outputFile << "Item #" << i+1 << ": ";
                outputFile << allItems.getVector().at(i).getItem();
                outputFile << endl;
            }
            
            outputFile.close();
            
            cin.ignore();
            
            cout << "\nEnter the name of the file as \"StoreItems.txt\" ->" << endl;
            getline(cin, fileName);
            ifstream inputFile(fileName.data());

            while(inputFile.fail())
            {
                cout << "The file could not be opened, try again\n" << endl;
                    
                cout << "Enter the name of the file as \"StoreItems.txt\" ->" << endl;
                getline(cin, fileName);
                
                inputFile.open(fileName.data());
            }
            
            cout << "\nThe items currently in your cart are:" << endl << endl;
            
            getline(inputFile, items);
            
            while(!inputFile.fail())
            {
                cout << items << endl;
                getline(inputFile, items);
            }
            
            cout << endl;
            
            inputFile.close();
        }
        
        else if (selection == '4')
        {
            int num = 99;
            
            int number = 0;
            
            do {
                    cout << "\nWhich item (starting from 0) would you like to reveal the price of?" << endl;
                    cin >> num;

                    try {
                            allItems.getVector().at(num);

                            if ( !( (num < allItems.getVectSize()) || (num > allItems.getVectSize()) ) )
                            {
                                throw out_of_range("\nNumber for accessing cart item is out of bounds");
                            }
                        
                            cout << "\nPrice of item #" << num+1 << " is $" << allItems.calculatePriceOfSingle(num) << "\n\n";
                        
                            number = 1;
                        }
                           
                    catch (out_of_range outOfCartRange)
                    {
                        cout << "\nCart item does not exist or maximum number of cart items has been reached.\n" << endl;
                    }
                    
                } while ( number != 1 );
        }
        
        else if (selection == '5')
        {
            double totalPrice = 0;

            totalPrice = allItems.calculatePrice();
            
            cout << "\nPrice of all items in cart (in total) = " << totalPrice << "$\n" << endl;
        }
               
        else if (selection == '6')
        {
            string answer = "";
            
            cout << "Would you like to print your items via vector or overloaded function? (write vector or overload)\n" << endl;
            
            cin >> answer;
            
            while(answer != "vector" && answer != "Vector" && answer != "overload" && answer != "Overload")
            {
                cout << "Invalid response, please write vector or overload" << endl;
                
                cin >> answer;
            }
            
            if(answer == "vector" || answer == "Vector")
            {
                allItems.printVect();
            }
            
            else if(answer == "overload" || answer == "Overload")
            {
                for(int i = 0; i < allItems.getVectSize(); i++)
                {
                    cout << allItems.getVector().at(i);
                }
            }
        }
      
        else if (selection == 'q' || selection == 'Q')
        {
            cout << "\nThank you for visiting the virtual store. Enjoy the rest of your day!" << endl;
        }
        
        else
        {
            cout << "\nInvalid selection.\n" << endl;
        }

    }while(selection != 'q' && selection != 'Q');
    
    return 0;
}
