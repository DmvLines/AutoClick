#include "Messages.h"
#include "KeyboardInputs.h"

int main() {
program:
	system("CLS");
	Enter();
	Begining();
	cin >> pick;

AutoClicker:
		switch (pick)
		{

		case 1: {
		tryagain:
			system("CLS");
			Trademark();
			cout << "Put in CPS\n: ";
			cin >> cps;
			system("CLS");
			if (cps <= 0)
			{
				cout << "Enter a positive number!";
				Sleep(1000);
				system("CLS");
				goto tryagain;
			}
			Trademark();
			cout << "You are clicking " << cps << " Clicks per second\n";
			while (true)
			{
				if (GetAsyncKeyState(0x06))
				{
					LeftSpam();
				}
				if (GetAsyncKeyState(0x25) & 1)
				{
					system("CLS");
					goto AutoClicker;
				}
				if (GetAsyncKeyState(0x24))
				{
					goto program;
				}
			}
		}
			  break;

		case 2: {
		roller:
			system("CLS");
			Trademark();
			cout << "Higher the number the faster you roll your mouse\n\nNEGATIVE NUMBERS roll down (TO YOU)\n\nPOSITIVE NUMBERS roll up (AWAY FROM YOU)\n\n: ";
			cin >> roll;
			system("CLS");
			Trademark();
			if (roll >= 1)
			{
				system("CLS");
				Trademark();
				cout << "You're rolling up " << roll << endl;
			}
			else if (roll <= -1)
			{
				system("CLS");
				Trademark();
				cout << "You're rolling down " << roll << endl;
			}
			else
			{
				system("CLS");
				Trademark();
				cout << "You're not rolling enter a (+)positve or (-)negative number";
				Sleep(1000);
			}
			while (true) {
				if (GetAsyncKeyState(0x04) & 0x8000)
				{
					mouse_event(MOUSEEVENTF_WHEEL, 0, 0, roll, 0);
					Sleep(1000 / roll);
				}
				if (GetAsyncKeyState(0x25) & 1)
				{
					system("CLS");
					goto roller;
				}
				if (GetAsyncKeyState(0x24))
				{
					goto program;
				}
			}
		}
			  break;

		case 3: {
		rightauto:
			system("CLS");
			Trademark();
			cout << "Put in CPS\n: ";
			cin >> cps;
			system("CLS");
			if (cps <= 0 || cps != cps)
			{
				cout << "Enter a positive number!";
				Sleep(1000);
				system("CLS");
				goto rightauto;
			}
			Trademark();
			cout << "You are right clicking " << cps << " Clicks per second";
			while (true)
			{
				if (GetAsyncKeyState(0x06) & 0x8000)
				{
					RightSpam();
				}
				if (GetAsyncKeyState(0x25) & 1)
				{
					system("CLS");
					goto rightauto;
				}
				if (GetAsyncKeyState(0x24))
				{
					goto program;
				}
			}
		}
			  break;

		case 4: {
		stopwatch:
			system("CLS");
			Trademark();
			cout << "Enter your time (seconds)\n: ";
			cin >> x;
			while (x > 0)
			{
				system("CLS");
				Trademark();
				cout << x;
				x--;
				Sleep(1000);
				system("CLS");
				while (x == 0)
				{
					system("CLS");
						Trademark();
						cout << "Done!";
							Sleep(50);
				if (GetAsyncKeyState(0x24) & 1)
				{
					goto program;
				}
				if (GetAsyncKeyState(0x25) & 1)
				{
					goto stopwatch;
				}
				}
			}
			if (x <= 0)
			{
				system("CLS");
				Trademark();
				cout << "Just enter a positive number\n";
				system("pause");
				goto stopwatch;
			}
		}
			  break;

		case 9: {
			system("CLS");
			Pos();

			while (true)
			{
				if (GetAsyncKeyState(0x28) & 0x8000)
				{
					system("CLS");
					Pos();
					GetCursorPos(&xypos);
					cout << "\nX:" << xypos.x << "\tY:" << xypos.y << endl;
					Sleep(10);
				}
				if (GetAsyncKeyState(0x26))
				{
				mousepos:
					system("CLS");
					Pos();
					cout << "Enter in your x::y\n\nX: ";
					cin >> x;
					cout << "Y: ";
					cin >> y;
					SetCursorPos(x, y);
					system("CLS");
					Pos();
					cout << "You're at mouse position X: " << x << "\tY: " << y << endl;
				}
				if (GetAsyncKeyState(0x27))
				{
					mousepos2:
					system("CLS");
					Pos();
					cout << "Select how many points you want.\n1. Two points\n2. 4 points\n: ";
					cin >> pick;

					if (pick == 1)
					{
						system("CLS");
						Pos();
						cout << "Enter your first X::Y position\nX: ";
						cin >> x;
						cout << "Y: ";
						cin >> y;
						cout << "Enter your second x::y position\nX: ";
						cin >> xPos;
						cout << "Y: ";
						cin >> yPos;
						system("CLS");
						Pos();
						cout << "Your positions are at:\n\vFirst set of X - Y\n" << "\nX1: " << x << "     Y1: " << y << "\n\v=========================================" << "\n\vSecond set of X - Y\n" << "\nX1: " << xPos << "     Y1: " << yPos;
						while (true)
						{
							if (GetAsyncKeyState(0x60)) 
							{
								(x, y);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(50);
								SetCursorPos(xPos, yPos);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								Sleep(50);
								if (GetAsyncKeyState(0x24))
								{
									goto program;
								}
								if (GetAsyncKeyState(0x25) & 1)
								{
									goto mousepos2;
								}
							}
						}
					}
					if (pick == 2)
					{
						cout << "Enter your first X::Y position\nX: ";
						cin >> x;
						cout << "Y: ";
						cin >> y;
						cout << "Enter your First X::Y position\nX: ";
						cin >> xPos;
						cout << "Y: ";
						cin >> yPos;
						cout << "Enter your Second X::Y position\nX: ";
						cin >> x1;
						cout << "Y: ";
						cin >> yy;
						cout << "Enter your Second X::Y position\nX: ";
						cin >> xPos1;
						cout << "Y: ";
						cin >> yPos1;
						system("CLS");
						Enter();
						cout << "Your positions are at:\n\vFirst set of X - Y\n" << "\nX1: " << x << "     Y1 : " << y << "\nX1 : " << xPos << "     Y1 : " << yPos << "\n\v======================================== = " << "\n\vSecond set of X - Y\n" << "\nX2: " << x1 << "     Y2 : " << yy << "\nX2 : " << xPos1 << "     Y2 : " << yPos1;
						while (true)
						{
							if (GetAsyncKeyState(0x60) & 1)
							{
								SetCursorPos(x, y);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(50);
								SetCursorPos(xPos, yPos);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								Sleep(50);
								SetCursorPos(x1, yy);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
								Sleep(50);
								SetCursorPos(xPos1, yPos1);
								Sleep(50);
								mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
								Sleep(50);
								if (GetAsyncKeyState(0x24))
								{
									goto program;
								}
								if (GetAsyncKeyState(0x25) & 1)
								{
									goto mousepos2;
								}
							}
						}
						if (GetAsyncKeyState(0x24))
						{
							goto program;
						}
						if (GetAsyncKeyState(0x25) & 1)
						{
							goto mousepos;
						}
					}
				}
				if (GetAsyncKeyState(0x24))
				{
					goto program;
				}
				if (GetAsyncKeyState(0x25) & 1)
				{
					goto mousepos;
				}
			}
		}
			  break;




		}
	if (!pick)
	{
		system("CLS");
		cout << "Wrong input!";
		cin.ignore();
		Sleep(1000);
		system("pause");
		goto program;
	}
}