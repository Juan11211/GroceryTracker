#include <map>
#include <string>


using namespace std; 

class GroceryMapper {
    public: 
        GroceryMapper();
    void loadFile(
        const string &filename);
    void displayMenu();
    void searchItem(const string &item);
    void printFrequencyList();
    void printFrequencyHistogram();
    void saveFile(const string &filename);

    private:
        map<string, int>
            groceryMapper;
};