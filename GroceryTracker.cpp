#include "header.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


// defining the functions, 

GroceryMapper::GroceryMapper() {} 

void GroceryMapper::loadFile(const string& filename){
    ifstream inputFile(filename);
    string item; 

    while(inputFile >> item){
        groceryMapper[item]++;
    }
    
    inputFile.close();
}

void GroceryMapper::displayMenu(){
    cout << "Menu Options:" << endl;
    cout << "1. Search for an item" << endl;
    cout << "2. Print item frequency list" << endl; 
    cout << "3. Print item frequency histogram" << endl; 
    cout << "4. Exit" << endl; 
}

void GroceryMapper::searchItem(const string& item){
    cout << groceryMapper[item] << endl;
}

void GroceryMapper::printFrequencyList(){
    cout << "Item Frequency List:" << endl;

    for (const auto& pair : groceryMapper){
        cout << pair.first << " " << pair.second << endl;
    }
}


void GroceryMapper::printFrequencyHistogram(){
    cout << "Item Frequency Histogram" << endl;

    for(const auto& pair : groceryMapper){
        cout << pair.first << " "; 

        for(int i = 0; i < pair.second; i++){
            cout << "*";
        }
        cout << endl;
    }
}

void GroceryMapper::saveFile(const string & filename){
    ofstream outputFile(filename);

    for(const auto& pair : groceryMapper){
        outputFile << pair.first << " " << pair.second << endl;
    }
    outputFile.close(); 
}