#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> intVector;
	int input;
	cout << "Input ten integers into an integer vector: " << endl;
	for (decltype(intVector.size()) i = 0; i < 10; i++)
	{
		cout << "integer " << i + 1 << ": ";
		cin >> input;
		intVector.push_back(input);
		cout << endl;
	}
	cout << "intVector: { ";
	for (auto itr = intVector.begin(); itr != intVector.end(); ++itr)
	{
		*itr *= 2;
		cout << *itr << " ";
	}
	cout << "}" << endl;

	return 0;
}
