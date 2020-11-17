#include <iostream>
using namespace std;

void sumEx(int a,int b,int& c)
{
	c = a + b;
}

int main()
{
	int change;

	sumEx(1,2,change);
}