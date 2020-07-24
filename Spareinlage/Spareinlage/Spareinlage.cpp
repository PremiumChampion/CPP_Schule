// Spareinlage.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
	double dStartkapital;
	double dZinssatz;
	double dEndkapital;
	
	// Eingabe
	cout << "Bitte gebe dein Startkapital ein: ";
	cin >> dStartkapital;
	cout << "Bitte gebe deinen Zinssatz ein: ";
	cin >> dZinssatz;

	// Verarbeitung
	dEndkapital = dStartkapital * pow((1 + dZinssatz/100), 3);

	// Ausgabe
	cout << " Dein Endkapital betraegt: " << dEndkapital << "EUR" << endl;

	return 0;
}
