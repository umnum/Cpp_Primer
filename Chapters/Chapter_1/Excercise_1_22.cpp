#include "Sales_item.h"

int main()
{
	Sales_item item;
	std::cout << "Enter information for each sales item. Enter '-1 -1 -1' to finish." << std::endl;
	if (std::cin >> item)
	{
		Sales_item next_item;
		while (std::cin >> next_item)
		{
			if (item.isbn() == next_item.isbn())
			{
				item += next_item;
			}
			else
			{
				std::cout << item << std::endl;
				item = next_item;
			}
		}
		std::cout << item << std::endl;
	}
	else
	{
		std::cerr << "No data entered." << std::endl;
		return -1;
	}
	return 0;
}
