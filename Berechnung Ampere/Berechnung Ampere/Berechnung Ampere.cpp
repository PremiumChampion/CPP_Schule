// Berechnung Ampere.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;


int main()
{
	// Eingabe
	double dSpanung = 220;
	double dWiederstand = 100;
	double dAmpere;

	// Verarbeitung
	dAmpere = dSpanung / dWiederstand;

	// Ausgsabe
	cout << "Die Stromstaerke betraegt bei einer Spanung von " << dSpanung << " Volt und einem Wiederstand von " << dWiederstand
		<< " Ohm " << dAmpere  << " Ampere."<< endl;
	cin.get();
	return 0;

}

