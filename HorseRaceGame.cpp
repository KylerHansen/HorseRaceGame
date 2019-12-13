#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main()
{
	int x=0;
	int xb = 0;
	bool start = false;
	
	string wall1 = { "=========================================================================================================" };
	string track1 = { "A..................................................................................................#" };

	string divider = { "-----+------+------+------+------+------+------+------+------+------+------+-------+------+-------+" };

	string track2 = { "B..................................................................................................#" };
	string wall2 = { "=========================================================================================================" };
	
	cout << "=========================================== HORSE RACE====================================================" << endl;
	cout <<endl;
	cout << "Player A presses Right control key."<<endl;
	cout << "--------------------------------------------" << endl;
	cout << "Player B presses Left control key." << endl;
	cout << " " << endl;
	cout << "==========================================================================================================" << endl;
	cout << endl;

	system("pause");

	
		
	while (true)
	{
		if (GetAsyncKeyState(VK_RCONTROL) != 0)
		{
			if (x < 100)
			{
				track1[x] = '.';
				track1[x += 1] = 'A';
			}
			else
			{
				cout << "The winnner is A (right control)!" << endl;
				break;
			}
		}

		if (GetAsyncKeyState(VK_LCONTROL) != 0)
		{
			if (xb < 100) {
				track2[xb] = '.';
				track2[xb += 1] = 'B';
			}
			else {
				cout << "The winner is B (left control)!" << endl;
				break;
			}
		}

		cout << wall1 << endl;
		cout << track1 << endl;
		cout << endl;
		cout << divider << endl;
		cout << endl;
		cout << track2 << endl;
		cout << wall2 << endl;
	
			system("cls");
		
	}

			
	
		

	

	


	






	return 0;
}