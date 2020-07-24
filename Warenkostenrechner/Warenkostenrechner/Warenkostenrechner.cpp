// Warenkostenrechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double nettopreis;
	double mehrwertsteuer;
	double bruttopreis;

    cout << "Bitte geben Sie den Nettopreis Ihres Artikels ein: ";
	cin >> nettopreis;
	mehrwertsteuer = nettopreis * 0.19;
	bruttopreis = nettopreis + mehrwertsteuer;

	cout << "Netto-Betrag:   " << setw(20) << fixed << setprecision(2) << nettopreis << " EUR" << endl;
	cout << "Mehrwertsteuer: " << left << setw(20) << fixed << setprecision(2) << mehrwertsteuer << " EUR" << endl;
	cout << "--------------------------------" << endl;
	cout << "Bruttobetrag:   " << right << setfill('.') << setw(20) << fixed << setprecision(2) << bruttopreis << " EUR" << endl;
}
