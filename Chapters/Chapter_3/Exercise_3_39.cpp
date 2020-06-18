#include <iostream>
#include <cstring>

using std::string;
using std::strcmp;
using std::cin;
using std::cout;
using std::endl;

int main ()
{
	string string1 = "string 1", string2 = "String 2";
	cout << "string1 is ";
	if (string1 < string2)
	{
		cout << "less than ";
	}
	else if (string1 > string2)
	{
		cout << "greater than ";
	}
	else
	{
		cout << "the same as ";
	}
	cout << "string2." << endl;

	char char_array1[] = "string 1", char_array2[] = "string 2";
	auto cmp_value = strcmp(char_array1, char_array2);
	cout << "char_array1 is ";
	if (cmp_value < 0)
	{
		cout << "less than ";
	}
	else if (cmp_value > 0)
	{
		cout << "greater than ";
	}
	else
	{
		cout << "the same as ";
	}
	cout << "char_array2." << endl;
	return 0;
}
