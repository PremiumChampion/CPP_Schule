// Kuchenverwaltung.cpp  Timo Woityschyn
//
#include <iostream>

using namespace std;

struct Kuchen
{
	string KuchenTyp[3];
	string TeigArt[3];
	string Belag[3];
	int OfenZeit[3];
};

int main()
{
	int Rezeptanzahl = 3;
	Kuchen Kuchentest[3];
	cout << "K U C H E N R E Z E P T V E R W A L T U N G" << endl;
	cout << "---------------------------------------------" << endl;
	for (int i = 0; i < Rezeptanzahl; i++)
	{
		cout << "Geben Sie die Kuchenbezeichnung ein:" << endl;
		cin >> Kuchentest[i].KuchenTyp[i];
		cout << "Geben Sie die Teig Art an:" << endl;
		cin >> Kuchentest[i].TeigArt[i];
		cout << "Geben Sie den Belag an:" << endl;
		cin >> Kuchentest[i].Belag[i];
		cout << "Geben Sie die Backzeit an:" << endl;
		cin >> Kuchentest[i].OfenZeit[i];
		system("cls");
	}

	system("cls");
	cout << "K U C H E N R E Z E P T V E R W A L T U N G" << endl;
	cout << "---------------------------------------------" << endl << endl;
	cout << "Folgende Kuchenrezepte wurden eingegeben:" << endl;
	for (int i = 0; i < Rezeptanzahl; i++)
	{
		cout << i << "." << Kuchentest[i].KuchenTyp[i] << endl;
		cout << "Er besteht aus einem\t" << Kuchentest[i].TeigArt[i] << "und ist mit \t" << Kuchentest[i].Belag[i] << "belegt." << endl;
		cout << "Zum Backen brauchen Sie\t" << Kuchentest[i].OfenZeit[i] << "Minuten." << endl << endl;
	}
	cin.get(); cin.get();

	return 0;
}
