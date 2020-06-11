#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	// read line by line of standard input
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}
	return 0;
}
