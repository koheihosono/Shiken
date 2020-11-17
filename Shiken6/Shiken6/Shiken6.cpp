#include <iostream>
using namespace std;

int main()
{
	int number;

	while (true)
	{
		cin >> number;

		if (number == 7)
		{
			break;
		}
		else
		{
			cout << "７を入力するまで終わりませんよ" << endl;
		}
	}
}