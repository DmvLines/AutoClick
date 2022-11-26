#pragma once
#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void LeftSpam() {
		INPUT in = { 0 };
		in.type = INPUT_MOUSE;
		in.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
		

		SendInput(1, &in, sizeof(INPUT));

		in.type = INPUT_MOUSE;
		in.mi.dwFlags = MOUSEEVENTF_LEFTUP;
		

		SendInput(1, &in, sizeof(INPUT));

		Sleep(1000 / cps);
}

void RightSpam() {
	INPUT in = { 0 };
	in.type = INPUT_MOUSE;
	in.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;


	SendInput(1, &in, sizeof(INPUT));

	in.type = INPUT_MOUSE;
	in.mi.dwFlags = MOUSEEVENTF_RIGHTUP;


	SendInput(1, &in, sizeof(INPUT));

	Sleep(1000 / cps);
}