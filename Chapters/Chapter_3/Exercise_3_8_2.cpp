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
	cout << "Enter an input string: ";
	getline(cin, input);
	// change non-whitespace characters into 'X'
	for (decltype (input.size()) index = 0; index < input.size(); index++)
	{
		if (!isspace(input[index]))
		{
			input[index] = 'X';
		}
	}
	cout << input << endl;
	return 0;
}
