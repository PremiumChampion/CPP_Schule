// Schleifen-Tests.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>


using namespace std;

int main()
{
	cout << "Schleife 1\n";
	int Schl1 = 3;

	while (Schl1 >= 0) {
		cout << Schl1 << endl;
		Schl1--;
	}

	cout << "Schleife 2\n";
	int Schl2 = 5;

	do {

		cout << Schl2 << endl;
		Schl2++;
	} while (Schl2 <= 10);

	cout << "Schleife 3\n";
	for (int i = 5; i <= 10; i++) {
		cout << i << endl;
	}

}
