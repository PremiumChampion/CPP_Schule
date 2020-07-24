// Funktionen in C++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <iomanip>

using namespace std;

double Rechteck(double x, double y);
int Fak(int x);
double Mwst(int nettoPreis);
double Quadrat(double length);
int Inbetween0And1000();
void Printfrom0toNumber(int zahl);
void GetSmallestDividend(int x, int y);

int main()
{
	double a = Rechteck(10, 15);
	cout << "Fläche des Rechtecks beträgt: " << fixed << setprecision(2) << a << endl;

	double b = Mwst(100);
	cout << "Die Mehrwertsteuer beträgt: " << fixed << setprecision(2) << b << endl;

	double c = Quadrat(1000);
	cout << "Die Fläche des Quadrats betraegt: " << fixed << setprecision(2) << c << endl;

	GetSmallestDividend(100, 10);

	cout << setprecision(0) << Fak(5) << endl;

	cout << Inbetween0And1000() << endl;

	Printfrom0toNumber(100);
}


double Rechteck(double x, double y) {
	return x * y;
}

double Mwst(int nettoPreis) {
	return nettoPreis * 0.19;
}

double Quadrat(double length) {
	return Rechteck(length, length);
}

void GetSmallestDividend(int x, int y) {

	int temp = 1;
	while (temp != 0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	cout << y;
}

int Eingabe(int x) {
	if (x > 0 && x < 100) {
		return 1;
	}
	else {
		return 0;
	}
}

void Zahlenausgabe(int start, int end) {
	for (int temp = start; temp < end ; temp++)
	{
		cout << temp << ", ";
	}
	cout << end - 1;
}

int Fak(int x) {

	if (x > 1) {
		return x * Fak(x - 1);
	}
	else {
		return x;
	}
}


int Inbetween0And1000() {
	cout << "Bitte gebe eine Zahl zwischen 0 und 1000 ein: ";
	int a;
	cin >> a;
	if (a > 0 && a < 1000) {
		return 1;
	}
	else {
		return 0;
	}
}

void Printfrom0toNumber(int zahl) {
	if (zahl > 1) {
		for (int i = 1; i < zahl - 1; i++)
		{
			cout << i << ", ";
		}
		cout << zahl;
	}
}


// Programm ausführen: STRG+F5 oder "Debuggen" > Menü "Ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
