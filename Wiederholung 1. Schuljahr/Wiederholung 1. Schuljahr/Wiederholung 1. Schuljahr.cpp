#include <iostream>

using namespace std;

struct Geldschein
{
	int value;
	int outputCount;
};

int main()
{
	
	double fixKosten = 0;
	double produktKosten = 0;
	double produktErloes = 0;
	int productCount = 0;

	cout << "Gewinnberechnung" << endl;

	cout << "Bitte geben Sie die fixen Kosten ein: ";
	cin >> fixKosten;
	cout << "Bitte geben Sie die Kosten für ein Produkt ein: ";
	cin >> produktKosten;
	cout << "Bitte geben Sie den Erloes für ein Produkt ein: ";
	cin >> produktErloes;
	cout << "Wie viele Produkte sollen hergestellt werden: ";
	cin >> productCount;
	cout << "Der Gewinn betraegt: " << fixKosten - ((produktErloes - produktKosten) * productCount);

	for (int i = 10; i > -1; i--)
	{
		for (int j = i; j > -1; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	int i, j, k;

	k = 0;
	for (i = 1; i < 10; i = i + 1) k = k + i;
	cout << k << endl;
	k = 0;
	for (i = 10; i > 8; i = i - 1) k = i;
	cout << k << endl;
	k = 0;
	for (i = 2; i < 10; i = i + 2) k = k + i;
	cout << k << endl;
	k = 0;
	for (i = 5; i; i--) k = i;
	cout << k << endl;
	k = 0;
	for (i = 1, j = 5; (i < 5) && (j > 1); i++, j--) k = k + i * j;
	cout << k << endl;
	k = 0;
	for (i = 1; i < 5; i++)
	cout << k << endl;
	k = 0;
	for (i = 1; i < 5; i++)
	{
		if (i == 3) continue;
		k = k + i;
	}
	cout << k << endl;
	k = 0;
	for (i = 1; i < 10; i++)
	{
		k = k + i;
		if (i == 6) break;
	}
	cout << k << endl;
	k = 0;
	

	int balanceoutput = 0;

	do {
		cin >> balanceoutput;
	} while (balanceoutput % 5 != 0);


	Geldschein Geldscheine[7];
	Geldscheine[0] = { 5,0 };
	Geldscheine[1] = { 10,0 };
	Geldscheine[2] = { 20,0 };
	Geldscheine[3] = { 50,0 };
	Geldscheine[4] = { 100,0 };
	Geldscheine[5] = { 200,0 };
	Geldscheine[6] = { 500,0 };
	cout << "Ausgabe:" << endl;
	for (int i = 6; i >= 0; i--)
	{
		while (Geldscheine[i].value <= balanceoutput) {
			Geldscheine[i].outputCount++;
			balanceoutput -= Geldscheine[i].value;
		}
		cout << "Geldschein: " << Geldscheine[i].value << " Anzahl: " << Geldscheine[i].outputCount << endl;
	}
}

