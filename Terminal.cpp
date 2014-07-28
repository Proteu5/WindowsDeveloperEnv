#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include "stdlib.h"
//#include "units.h" (for +1 unit type)

// g++ terminal.cpp -o terminal.exe -fno-exceptions

using namespace std;

int main()
{

	char iActive;
	//command stream

	// Build Windows Dev. Terminal
	system( "start cmd /k \"title Windows Dev Env & cd C:\\Users\\Mike\\Documents\\WindowsDev\\cmdfetch-master\\cmdfetch-master && ansicon.exe lua cmdfetch.lua -l hat & prompt Orion@:$ & cd C:\\MinGW\\MSYS\\1.0\\Home\\Mike\\Dev" ); 

	// Launch MSYS Compiler
	system( "start cmd /k C:\\MinGW\\MSYS\\1.0\\msys.bat & exit" );

	// Launch Sublime Text 2
	system( "Start \"\"  \"C:\\Program Files (x86)\\Sublime Text 2\\sublime_text.exe\" & exit" );
	//system( "start cmd /k \"echo success & title healper22 & cd C:\\Users\\Mike\\Documents\\WindowsDev\\cmdfetch-master\\cmdfetch-master & ansicon.exe lua cmdfetch.lua -l hat" ); 
	
	// Calculator
	cout << "\n\n\t\tWelcome To Canopy Terminal\n\n";
	cout << "\n  MSYS For Dev. and Compilation \n\n  Canopy: DIR Debugging \n\n  Auto Sublime 2 \n\n  Tools & Commands";
	cout << "\n\n\t\t | [C]alculator | \n";
	cout << "Canopy@User:$ ";
	cin >> iActive;
	
	if (iActive == 'C')
	{
		int i, i1, i2;
		printf ("Checking if processor is available...");
		if (system(NULL)) puts ("Ok");
		else exit (1);
		printf ("Executing Terminal42 Enviornment...\n");
		Sleep(2000);
		i1 = system ("title Terminal 42");
		i2 = system ("color 0B");
		i = system ("c:/windows/system32/calc.exe");                                               
		printf ("The value returned was: %d.\n",i, i1, i2);
		getchar();
	} 
	else
	{
		cout << "\n\n\t\tError, Wrong Input!\n";
	}
	cout << "Waiting For Dev....";
	return 0;
	
	
}