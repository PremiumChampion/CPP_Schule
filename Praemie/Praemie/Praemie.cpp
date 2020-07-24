#include <iostream>

using namespace std;

int main()
{
	double jahreseinkommen, gehalt, betriebszugehoerigkeit;
	
	cout << "Jahreseinkommen: ";
	cin >> jahreseinkommen;
	cout << "Betriebszugehoerigkeit: ";
	cin >> betriebszugehoerigkeit;


	if (betriebszugehoerigkeit < 2) {
		gehalt =  jahreseinkommen * 0.05;
	}
	else if (betriebszugehoerigkeit < 5)
	{
		gehalt = jahreseinkommen * 0.10;
	}
	else if (betriebszugehoerigkeit < 15) {
		gehalt = jahreseinkommen * 0.15;
	}
	else {
		gehalt = jahreseinkommen * 0.20;
	}
	cout << "Jahreseinkommen: " << jahreseinkommen;
	cout << "Praemie: " << gehalt;
}