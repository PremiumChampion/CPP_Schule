#include <string>
#include <iostream>
using namespace std;
int main()
{
	double b, summe, produkt, a;

	// Eingabe
	cout << "Bitte gebe Zahl 1 ein\n";
	cin >> a;
	cout << "Bitte gebe Zahl 2 ein\n";
	cin >> b;

	// Verarbeitung
	summe = a + b;
	produkt = a * b;
	
	// Ausgabe
	cout << "Die Summe von " << a << " und " << b << " lautet: " << summe << endl;
	cout << "Das Produkt von " << a << " und " << b << " lautet: " << produkt << endl;
	cout << endl;
	cout << " Druecken sie eine beliebige Taste";
	

}

