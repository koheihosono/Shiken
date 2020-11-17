#include <iostream>
using namespace std;

void sumEx(int& a,int& b)
{
	int c = a + b;
}

int main()
{
	int plus;
	int plus2;

	cin >> plus;
	cin >> plus2;

	sumEx(plus,plus2);
}