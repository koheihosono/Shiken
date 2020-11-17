#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;

	int array[10] =
	{

	};

	for (int loop = 0; loop < 10; ++loop)
	{
		cin >> number;

		array[loop] = number;
	}

	for (int loop2 = 0; loop2 < 10; ++loop2)
	{
		sum += array[loop2];
	}

	cout << sum << endl;
}