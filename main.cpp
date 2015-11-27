#include <iostream>
#include "InventoryItem.h"


int main()
{
	InventoryItem Books;
	InventoryItem Newspaper("Men's Health", 25, 5.1, 1000);

	std::cout << "Books name: " << Books.getName() << std::endl;
	std::cout << "Books item number: " << Books.getItemNumber() << std::endl;
	std::cout << "Books price: " << Books.getPrice() << std::endl;
	std::cout << "Books units in stock: " << Books.getUnitsInStock() << std::endl;

	std::cout << "Newspaper name: " << Newspaper.getName() << std::endl;
	std::cout << "Newspaper item number: " << Newspaper.getItemNumber() << std::endl;
	std::cout << "Newspaper price: " << Newspaper.getPrice() << std::endl;
	std::cout << "Newspaper units in stock: " << Newspaper.getUnitsInStock() << std::endl;

	system("pause");
	return 0;
}