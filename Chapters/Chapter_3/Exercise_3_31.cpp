#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const size_t array_size = 10;
	int int_array[array_size];
	cout << "int_array: { ";
	for (size_t i = 0; i < array_size; i++)
	{
		int_array[i] = i;
		cout << int_array[i] << " ";
	}
	cout << "}" << endl;
	return 0;
}
