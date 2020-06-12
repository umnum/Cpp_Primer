#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string input;
	decltype (input.size()) index = 0;
	cout << "Enter an input string: ";
	getline(cin, input);
	// change non-whitespace characters into 'X'
	while (index < input.size())
	{
		if (!isspace(input[index]))
		{
			input[index] = 'X';
		}
		index++;
	}
	cout << input << endl;
	return 0;
}
