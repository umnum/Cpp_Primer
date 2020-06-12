#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string input;
	cout << "Enter a string: " << endl;
	getline(cin, input);
	for (auto &c : input)
	{
		if (!ispunct(c))
		{
			cout << c;
		}
	}
	cout << endl;
	return 0;
}
