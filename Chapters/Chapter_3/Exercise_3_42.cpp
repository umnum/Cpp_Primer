#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	const size_t array_size = 10;
	vector<int> int_vector;
	for (size_t i = 0; i < array_size; i++)
	{
		int_vector.push_back(i);
	}
	int int_array[array_size];
	cout << "{ ";
	for (size_t i = 0; i < array_size; i++)
	{
		int_array[i] = int_vector[i];
		cout << int_array[i] << " ";
	}
	cout << "}" << endl;
	return 0;
}
