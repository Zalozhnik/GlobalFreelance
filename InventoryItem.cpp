#include "InventoryItem.h"

InventoryItem::InventoryItem()
{
	name = "";
	itemNumber = -1;
	price = 0.0;
	unitsInStock = 0;
}

InventoryItem::InventoryItem(std::string n, int itemNum, double p, int numUnits)
{
	setName(n);
	setItemNumber(itemNum);
	setPrice(p);
	setUnitsInStock(numUnits);
}

std::string InventoryItem::getName()
{
	return name;
}

void InventoryItem::setName(std::string n)
{
	name = n;
}

int InventoryItem::getItemNumber()
{
	return itemNumber;
}

void InventoryItem::setItemNumber(int num)
{
	itemNumber = num;
}

double InventoryItem::getPrice()
{
	return price;
}

void InventoryItem::setPrice(double p)
{
	price = p;
}

int InventoryItem::getUnitsInStock()
{
	return unitsInStock;
}

void InventoryItem::setUnitsInStock(int units)
{
	unitsInStock = units;
}


