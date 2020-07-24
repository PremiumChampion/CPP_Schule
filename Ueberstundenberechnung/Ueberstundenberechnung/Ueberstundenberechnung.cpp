// Ueberstundenberechnung.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>


using namespace std;

int main()
{
	double sollStundnen, istStunden, stundenLohn, lohn;

	cout << "Bitte gebe die Sollstunden an: ";
	cin >> sollStundnen;
	cout << "Bitte gebe die Iststunden an: ";
	cin >> istStunden;
	cout << "Bitte gebe den Stundensatz ein: ";
	cin >> stundenLohn;


	if ((istStunden / sollStundnen) < 1.10)
	{
		if (istStunden > sollStundnen)
		{
			lohn = ((istStunden - sollStundnen) * 1.30 + sollStundnen) * stundenLohn;
			cout << "\n+30%";
		}
		else {
			lohn = istStunden * stundenLohn;
			cout << "\nKeine Ueberstunden";
		}
	}
	else {
		lohn = ((istStunden - sollStundnen) * 1.25 + istStunden) * stundenLohn;
		cout << "\n+20%";
	}
	cout << "Lohn: " << lohn;
}
