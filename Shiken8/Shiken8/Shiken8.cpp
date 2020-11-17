#include <iostream>
using namespace std;

void sumEx(int& c)
{
	int a = 1;
	int b = 2;
	c = a + b;
}

int main()
{
	int plus;

	cin >> plus;

	sumEx(plus);
}