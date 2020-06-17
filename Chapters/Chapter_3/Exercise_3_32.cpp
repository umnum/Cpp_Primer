#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	const size_t array_size = 10;
	vector<int> int_array;
	cout << "int_array: { ";
	for (size_t i = 0; i < array_size; i++)
	{
		int_array.push_back(i);
		cout << int_array[i] << " ";
	}
	cout << "}" << endl;
	return 0;
}
