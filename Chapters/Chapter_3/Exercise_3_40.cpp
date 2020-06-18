#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strcpy;
using std::strcat;

int main()
{
	char char_array1[22] = "string 1 and ", char_array2[] = "string 2", char_array3[22];
	strcat(char_array1, char_array2);
	strcpy(char_array3, char_array1);
	cout << char_array3 << endl;
	return 0;
}
