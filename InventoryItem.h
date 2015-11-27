
#include <string>

class InventoryItem
{
public:
	InventoryItem();														// Default constructor.This initializes name to an
																			// empty string, itemNumber to - 1, price to 0.0 and
																			// unitsInStock to 0

	InventoryItem(std::string n, int ItemNum, double p, int numUnits);		// Constructor – sets name to n, itemNumber to
																			// itemNum, price to p, and unitsInStock to numUnits.
																			// In other words, this constructor allows the client
																			// code to create an item of InventoryItem type and
																			// set the corresponding private data members
	
	std::string getName();													// Returns the name of the item
	void setName(std::string n);											// Sets the internal private data name of the item
	int getItemNumber();													// Returns the item number of the item
	void setItemNumber(int num);											// Sets the internal private data itemNumber of the item
	double getPrice();														// Returns the price of the item
	void setPrice(double p);												// Sets the internal private data price of the item
	int getUnitsInStock();													// Returns the number of units in stock
	void setUnitsInStock(int units);										// Sets the internal private data for the number of units in stock

private:
	std::string name;														// This will maintain the name of the inventory item
	int itemNumber;															// This is the item number of the item
	double price;															// This the price of the item
	int unitsInStock;														// This is the number of this particular item in stock
};

