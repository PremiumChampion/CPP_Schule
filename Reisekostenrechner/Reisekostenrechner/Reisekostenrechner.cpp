// Timo Woityschyn *** Reisekostenrechner.cpp
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	double grundPreis;
	int person;
	double reisepreis;
	double verpfelgungskosten;
	const double gewinnpauschale = 100;
	double gesamtKosten;
	double kostenProPerson;



	cout << "R E I S E K O S T E N R E C H N E R\n";
	cout << "----------------------------------------\n";
	cout << "Grundpreis der Reise pro Person <eur> :";
	cin >> grundPreis;
	
	cout << "\nAnzahl der Reisenden:                ";
	cin >> person;
	system("cls");

	reisepreis = grundPreis * person;
	verpfelgungskosten = reisepreis * 0.03;
	gesamtKosten = reisepreis + verpfelgungskosten + gewinnpauschale;
	kostenProPerson = gesamtKosten / person;
	
	cout << "R E I S E K O S T E N R E C H N E R\n";
	cout << "----------------------------------------\n";
	cout << "Pro Reise werden 3% Verpfegungskosten \nund 100 Euro Gewinnpauschale berechnet.\n";
	cout << "----------------------------------------\n\n\n";
	cout << "Fuer die Reise ergibt sich ...\nbei \'" << grundPreis << "\' EUR grundPreis pro Person\nund \'" << person << "\' Reisenden:\n";

	cout << "Reisepreis <EUR>              : " << reisepreis << endl;
	cout << "+ Verpflegungskosten <EUR>    : " << verpfelgungskosten << endl;
	cout << "+ Gewinnpauschale: <EUR>      : " << gewinnpauschale << endl;

	cout << "----------------------------------------\n";
	cout << "Gesamtkonsten <EUR>           : " << gesamtKosten << endl;
	cout << "\n\n --> Preis pro Person : " << kostenProPerson << " EUR" << endl;
	cin.get();
	return 0;
}

