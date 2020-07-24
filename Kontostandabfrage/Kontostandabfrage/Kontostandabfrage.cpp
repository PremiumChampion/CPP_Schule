// Kontostandabfrage.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	double kontostand;
	cout << "Bitte gebe deinen Kontostand ein: ";
	cin >> kontostand;
	if (kontostand < 0)
	{
		cout << "Ihr Konto ist im Soll";
	}
	else {
		if (kontostand == 0)
		{
			cout << "Ihr Konto ist Ausgeglichen";
		}
		else {
			cout << "Ihr Konto ist im Haben";
		}
	}
}
