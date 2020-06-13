#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int value;
	vector<int> intVector;
	cout << "Enter int values. Type 'exit' to stop." << endl;
	while (cin >> value)
	{
		intVector.push_back(value);
	}
	cout << "intVector: { ";
	for (auto i : intVector)
	{
		cout << i << " ";
	}
	cout << "}" << endl;
	return 0;
}
