#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int main()
{
	const size_t array_size = 10;
	int int_array_1[array_size];
	int int_array_2[array_size];
	for (size_t i = 0; i < array_size; i++)
	{
		int_array_1[i] = int_array_2[i] = i;
	}
	for (auto *p1curr = begin(int_array_1), *p2curr = begin(int_array_2), *p1end = end(int_array_1), *p2end = end(int_array_2);
			p1curr != p1end && p2curr != p2end; ++p1curr, ++p2curr)
	{
		if (*p1curr != *p2curr)
		{
			cout << "The two arrays are not equal." << endl;
			return -1;
		}
	}
	/* could also check for size equality with pointer arithmatic (size_t size = pend - pbeg), 
	 * but size is already known in advance */
	cout << "The two arrays are equal." << endl;


	vector<int> int_vector_1;
	vector<int> int_vector_2;
	for (decltype (int_vector_1.size()) i = 0; i < 10; i++)
	{
		int_vector_1.push_back(i);
		int_vector_2.push_back(i);
	}
	cout << "The two vectors " << (int_vector_1 == int_vector_2 ? "are " : "are not ") << "equal." << endl;
	return 0;
}
