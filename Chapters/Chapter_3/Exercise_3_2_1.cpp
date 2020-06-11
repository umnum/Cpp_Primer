#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ()
{
	// read line by line of standard input
	string line;
	while (getline(cin, line))
	{
		if (line.empty())
		{
			break;
		}
		cout << line << endl;
	}
	return 0;
}
