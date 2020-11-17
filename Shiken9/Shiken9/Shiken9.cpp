#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));

	int dice = rand() % 6;
	
	int choice;

	cin >> choice;

	cout << dice << endl;

	if (choice == dice)
	{
		cout << "当たり" << endl;
	}
}