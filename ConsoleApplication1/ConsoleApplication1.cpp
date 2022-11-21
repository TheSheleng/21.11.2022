#pragma comment (lib, "test1")
#include <iostream>
#include <conio.h>

using namespace std;
#include "../test1/Main.h"

int main()
{
	while (true)
	{
		float a, b;
		cout << "Enter first num: ";
		cin >> a;
		cout << "Enter seccond num: ";
		cin >> b;
		cout << endl;

		cout << "Chose action: " << endl
			<< "\t1. Sum" << endl
			<< "\t2. Min" << endl
			<< "\t3. Mult" << endl
			<< "\t4. Div" << endl;

		switch (_getch())
		{
		case '1': cout << Sum(a, b); break;
		case '2': cout << Min(a, b); break;
		case '3': cout << Mult(a, b); break;
		case '4':
			try { cout << Div(a, b); }
			catch (const char* s) { cout << "Error: " << s; }
			break;
		}

		cout << endl << endl;
	}
}