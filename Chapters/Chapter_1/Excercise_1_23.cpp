#include "Sales_item.h"
#include <unordered_map>
#include <vector>
#include <string>

int main()
{
	Sales_item item; // input Sales_item information
	std::unordered_map<std::string, Sales_item> items; // hash map for storing running sums of each type of Sales_item, accoding to the ISBN

	std::cout << "Enter information for each sales item. Enter '-1 -1 -1' to finish." << std::endl;
	if (std::cin >> item)
	{
		items.insert(std::make_pair(item.isbn(),item)); // insert the first Sales_item into the hash map
		while (std::cin >> item) // while more Sales_items are being processed
		{
			if (items.find(item.isbn()) != items.end()) // Sales_item's ISBN was detected
			{
				items[item.isbn()] += item; // add the item to the running sum
			}
			else
			{
				items.insert(std::make_pair(item.isbn(), item)); // add a new Sales_item to the hash map
			}
		}
		std::unordered_map<std::string, Sales_item>::iterator itr;
		for (itr = items.begin(); itr != items.end(); itr++) // display total sales of all Sales_items, according to ISBN
		{
			std::cout << itr->second << std::endl;
		}
	}
	else
	{
		std::cerr << "No data entered." << std::endl;
		return -1; // input error occurred
	}
	return 0;
}
