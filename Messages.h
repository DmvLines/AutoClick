#pragma once
#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
	
int cps, roll, pick;
int x, x1, y, yy, xPos, xPos1, yPos, yPos1;
void Begining(), Trademark(), Enter(), Pos();
char a{ 'z' };
POINT xypos;

void Begining() {
	cout << "1. Auto Clicker\n\v2. Auto Mouse Wheel\n\v3. Right Auto Clicker\n\v4. Stopwatch\n\v9. Mouse Position\n\v: ";
}
void Trademark() {
	cout << "                                     ..:::legalMenu created by DmvLines:::..\n";
	cout << "                                     \"To go back to the main menu press HOME\"\n";
	cout << "                                  \"To go enter a new number press LEFT ARROW KEY\"\n\n\v\v";
}
void Enter() {
	cout << "                                     ..:::legalMenu created by DmvLines:::..\n\n\v\v";
}
void Pos() {
	cout << "                                     ..:::legalMenu created by DmvLines:::..\n";
	cout << "                                     \"To go back to the main menu press HOME\"\n";
	cout << "                          \"Press RIGHT ARROW to select points to spam (inventory management)\"\n";
	cout << "                          \"Press LEFT ARROW to select X - Y points to make sure it is correct\"\n";
	cout << "                                     \"Press DOWN ARROW to get mouse position\"\n\n\v\v";
}