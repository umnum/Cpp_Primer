#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	// initialize matrix
	const size_t row = 3, col = 4;
	int ia[row][col];
	size_t cnt = 0;
	for (auto &row : ia)
	{
		for (auto &col : row)
		{
			col = cnt++;
		}
	}

	// version 1: use range for
	cout << "ia: { ";
	for (auto &row : ia)
	{
		for (auto col : row)
		{
			cout << col << " ";
		}
	}
	cout << "}" << endl;
	// version 2: use for loop and subscripts
	cout << "ia: { ";
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << ia[i][j] << " ";
		}
	}
	cout << "}" << endl;
	// version 3: use for loop and pointers
	cout << "ia: { ";
	for (auto p = begin(ia); p != end(ia); p++)
	{
		for (auto q = begin(*p); q != end(*p); q++)
		{
			cout << *q << " ";
		}
	}
	cout << "}" << endl;
	return 0;
}
