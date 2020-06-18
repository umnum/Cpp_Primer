#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	const size_t array_size = 10;
	int int_array[array_size];
	auto *array_pointer = int_array;
	auto *b = begin(int_array), *e = end(int_array);
	for (auto *pcurr = begin(int_array), *pend = end(int_array); pcurr != pend; ++pcurr)
	{
		*pcurr = 0;
	}
	cout << "int_array: { ";
	for (size_t i = 0; i < array_size; i++)
	{
		cout << int_array[i] << " ";
	}
	cout << "}" << endl;
	return 0;
}
