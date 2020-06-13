#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	string input;
	vector<string> stringVector;
	cout << "Enter string values. Type 'exit' to stop." << endl;
	while (cin >> input)
	{
		if (input == "exit")
			break;
		stringVector.push_back(input);
	}
	cout << "intVector: { ";
	for (auto s : stringVector)
	{
		cout << s << " ";
	}
	cout << "}" << endl;
	return 0;
}
