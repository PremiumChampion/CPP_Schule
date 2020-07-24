// Rabatt.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
	double Menge, Dauer, Rabatt_Satz, Stückpreis, Gesamtpreis, Endpreis, Rabatt;

	cin >> Menge;

	cin >> Dauer;

	cin >> Stückpreis;

	if (Menge < 500)
	{
		Rabatt_Satz = 0.02;
	}
	else {
		if (Menge < 1000)
		{
			Rabatt_Satz = 0.05;
		}
		else {
			if (Dauer > 10)
			{
				Rabatt_Satz = 0.15;
			}
			else {
				Rabatt_Satz = 0.10;
			}
		}
	}

	Gesamtpreis = Stückpreis * Menge;
	Rabatt = Gesamtpreis * Rabatt_Satz;
	Endpreis = Gesamtpreis - Rabatt;

	cout << "\nGesamtpreis: " << Gesamtpreis;
	cout << "\nRabatt: " << Rabatt;
	cout << "\nEndpreis: " << Endpreis;
}