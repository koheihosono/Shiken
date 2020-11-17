#include <iostream>
using namespace std;

int main()
{
	for (int number = 0; number < 20; ++number)
	{
		if (number % 2 == 0)
		{
			cout << "こんにちは" << endl;
		}
		else
		{
			cout << "こんばんは" << endl;
		}
	}
}