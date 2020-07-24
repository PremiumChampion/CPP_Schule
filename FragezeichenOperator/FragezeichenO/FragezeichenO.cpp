// FragezeichenO.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
	int x, y, z;

	cout << "Bitte gebe die x-Zahl ein: ";
	cin >> x;
	cout << "Bitte gebe die y-Zahl ein: ";
	cin >> y;
	cout << "Bitte gebe die z-Zahl ein: ";
	cin >> z;
	
	x = (x == 0 && y > 0 && z > 0) ? y+z : x;

	cout << x << endl;
	cout << (y > z) ? y : z;
}

// 