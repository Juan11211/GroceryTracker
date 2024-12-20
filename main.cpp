#include <iostream>
#include "header.h"
using namespace std; 

int main(){
    GroceryMapper cornerGrocer; 

    int option;

    while (option != 4){
        cornerGrocer.displayMenu(); 

        cout << "Enter an option: ";

        cin >> option;

        switch(option){
            case 1: {
                string searchItem;
                cout << "Enter item name: "; 
                cin >> searchItem;
                cornerGrocer.searchItem(searchItem);
                break;
            }

            case 2: {
                cornerGrocer.printFrequencyList();
                break;
            }

            case 3: {
                cornerGrocer.printFrequencyHistogram();
                break;
            }

            case 4: {
                cout << "Program finished" << endl;
                break;

                default: 
                cout << "Not a valid choice" << endl;
            }
        }

        cornerGrocer.saveFile("frequency.data");

        return 0;
    }
}