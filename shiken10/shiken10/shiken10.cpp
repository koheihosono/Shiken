#include <iostream>
#include <ctime>
using namespace std;

void win()
{
	cout << "あなたの勝利です" << endl;
}

void lose()
{
	cout << "あなたの敗北です" << endl;
}

int main()
{
	srand((unsigned int)time(NULL));

	int choice;

	cout << "１＝グー　２＝チョキ　３＝パー" << endl;

	while (true)
	{
		int enemy = rand() % 3;

		cin >> choice;

		if (choice == 1)
		{
			if (enemy == 0)
			{
				cout << "あいこです" << endl;
			}
			else if (enemy == 1)
			{
				win();
				break;
			}
			else
			{
				lose();
				break;
			}
		}

		else if (choice == 2)
		{
			if (enemy == 1)
			{
				cout << "あいこです" << endl;
			}
			else if (enemy == 2)
			{
				win();
				break;
			}
			else
			{
				lose();
				break;
			}
		}

		else if (choice == 3)
		{
			if (enemy == 2)
			{
				cout << "あいこです" << endl;
			}
			else if (enemy == 0)
			{
				win();
				break;
			}
			else
			{
				lose();
				break;
			}
		}
		else
		{
			cout << "出すべき手が違います" << endl;
		}
	}
}