#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//--------------------------------------------------
	cout << "--1--\n";

	int ax = 3;

	while (ax > 0) {
		cout << ax << endl;
		ax--;
	}

	//--------------------------------------------------
	cout << "--2--\n";

	int bx = 5;

	do {
		cout << bx << endl;
		bx++;
	} while (bx <= 10);

	//--------------------------------------------------
	cout << "--3--\n";

	bool cend = false;
	string cname;
	int cgeschlecht;
	int clanguage;
	string causgabe;

	do {

		causgabe = "";
		cout << "Bitte gebe deinen Namen ein: ";
		cin >> cname;
		cout << "Bitte gebe dein Geschlecht ein (1 == Divers, 2 == Frau, 3 == Mann): ";
		cin >> cgeschlecht;
		cout << "Bitte gebe dein Sprache ein (1 == Deutsch, 2 == Englisch, 3 == Polnisch): ";
		cin >> clanguage;

		switch (cgeschlecht)
		{
		case 1:

			switch (clanguage)
			{
			case 1:
				causgabe += "Hallo HERR/FRAU " + cname;
				break;
			case 2:
				causgabe += "Hello SIR/MADAM " + cname;
				break;
			case 3:
				causgabe += "Witam PANA/KOBIETY " + cname;
				break;
			default:
				cout << "Falscheingabe!!!";
				cend = true;
				break;
			}

			break;

		case 2:

			switch (clanguage)
			{
			case 1:
				causgabe += "Hallo FRAU " + cname;
				break;
			case 2:
				causgabe += "Hello MADAM " + cname;
				break;
			case 3:
				causgabe += "Witam KOBIETY " + cname;
				break;
			default:
				cout << "Falscheingabe!!!";
				cend = true;
				break;
			}

			break;

		case 3:

			switch (clanguage)
			{
			case 1:
				causgabe += "Hallo HERR " + cname;
				break;
			case 2:
				causgabe += "Hello SIR " + cname;
				break;
			case 3:
				causgabe += "Witam PANA " + cname;
				break;
			default:
				cout << "Falscheingabe!!!";
				cend = true;
				break;
			}

			break;

		default:

			cout << "Falscheingabe!!!";
			cend = true;

			break;
		}

	} while (cend);

	causgabe += "\n";

	while (cend == false)
	{
		string tmp;
		cout << causgabe;
		cout << "Wiederholen? Y/N: ";
		cin >> tmp;

		if (tmp != "Y")
		{
			cend = true;
		}
	}

	//--------------------------------------------------
	cout << "--4--\n";
	bool dend = false;
	while (dend == false)
	{
		double dx = 0;
		string tmp;

		for (int i = 0; i < 3; i++)
		{
			cout << "Bitte gebe eine Zahl ein: ";
			double tmp;
			cin >> tmp;
			dx += tmp;
		}

		int out = dx;
		cout << out << endl;

#pragma region Wiederholung

		cout << "Wiederholen? Y/N: ";
		cin >> tmp;

		if (tmp != "Y")
		{
			dend = true;
		}
#pragma endregion

	}

	//--------------------------------------------------
	cout << "--5--\n";
	bool eend = false;

	while (eend == false)
	{
		double eZinsen, eKapital, eZinssatz;
		int eTage, eInput;
		bool ewronginput;

		do {  
			ewronginput = false;
			cout << "Z I N S P R O G R A M M\n" << endl;
			cout << "1. Zinsen\n2. Kapital\n3. Zinssatz\n4.Zinstage\n";
			cout << "Bitte waehlen Sie: ";
			cin >> eInput;

			if (eInput != 1 && eInput != 2 && eInput != 3 && eInput != 4) {
				ewronginput = true;
				cout << "Bitte gebe eine Korrekte Zahl an: [ 1 | 2 | 3 | 4 ]";
			}

		} while (ewronginput);

		switch (eInput)
		{
		case 1:

			// Eingabe
			cout << "Kapital: ";
			cin >> eKapital;
			cout << "Zinssatz: ";
			cin >> eZinssatz;
			cout << "Zinstage: ";
			cin >> eTage;

			//Verarbeitung
			eZinsen = eKapital * eZinssatz * eTage / 100 / 360;

			// Ausgabe
			cout << "Die Zinsen betragen: " << eZinsen;

			break;
		case 2:

			// Eingabe
			cout << "Zinsen: ";
			cin >> eZinsen;
			cout << "Zinssatz: ";
			cin >> eZinssatz;
			cout << "Zinstage: ";
			cin >> eTage;

			//Verarbeitung
			eKapital = eZinsen * 100 * 360 / eZinssatz / eTage;

			// Ausgabe
			cout << "Das Kapital betraegt: " << eKapital;
			break;
		case 3:

			// Eingabe
			cout << "Kapital: ";
			cin >> eKapital;
			cout << "Zinsen: ";
			cin >> eZinsen;
			cout << "Zinstage: ";
			cin >> eTage;

			//Verarbeitung
			eZinssatz = eZinsen * 100 * 360 / eKapital / eTage;

			// Ausgabe
			cout << "Der Zinssatz betraegt: " << eZinssatz;

			break;
		case 4:

			// Eingabe
			cout << "Kapital: ";
			cin >> eKapital;
			cout << "Zinssatz: ";
			cin >> eZinssatz;
			cout << "Zinsen: ";
			cin >> eZinsen;

			//Verarbeitung
			eTage = eZinsen * 100 * 360 / eKapital / eZinssatz;

			// Ausgabe
			cout << "Die Zinstage betragen: " << eTage;

			break;
		default:
			break;
		}

		char tmp;
		cout << "\nNeue Berechnung? Y/N: ";
		cin >> tmp;

		if (tmp != 'Y')
		{
			eend = true;
		}
		else {
			system("cls");
		}
	}
	//--------------------------------------------------
	cout << "--6--\n";


	double fFix, fMin, fMore;

	int fCopy = 500;
	// Eingabe
	cout << "KOPIERER-KOSTEN-RECHNER" << endl;
	cout << "--------------------------------------" << endl;

	cout << left << setw(41) << "Fixe Monatskosten <EUR>:";
	cin >> fFix;
	cout << setw(41) << "Mindestabnahmemenge pro Montat <Stueck>:";
	cin >> fMin;
	cout << setw(41) << "Preis fuer jede weitere Kopie <EUR>:";
	cin >> fMore;

	system("cls");

	cout << "KOPIERER-KOSTEN-RECHNER" << endl;
	cout << "--------------------------------------" << endl;

	cout << setw(41) << "Fixe Monatskosten:" << setw(10) << fFix << " EUR" << endl;
	cout << setw(41) << "Mindestabnahmemenge pro Montat:" << setw(10) << fMin << " Stueck" << endl;
	cout << setw(41) << "Preis fuer jede weitere Kopie:" << setw(10) << fMore << " EUR" << endl;

	cout << setw(20) << "Menge" << setw(20) << "Gesamtkosten" << setw(20) << "Stueckkosten" << endl;

	while (fCopy <= 8000) {

		// Verarbeitung
		double fGesamt, fStueck;
		double fAbnahme = fCopy < 1500 ? 1500 : (double)fCopy;
		fGesamt = fFix + (fAbnahme * fMore);
		fStueck = fGesamt / fCopy;

		// Ausgabe
		cout << setw(20) << fCopy << setw(20) << fGesamt << setw(20) << fStueck << "" << endl;
		fCopy += 500;
	}


	//--------------------------------------------------
	cout << "--7--\n";
	const double gbetrag = 100;
	double gcurrent = 0;
	double gleft = 100;
	double gct10 = 0, geu2 = 0, geu5 = 0;
	double tmp = gleft * 2;

	while ((gct10 + geu2 + geu5) <= gbetrag && tmp > gbetrag) {
		gcurrent += 1;
		gct10 += 10;
		gleft -= 10;
		tmp = gcurrent + (2 * gleft);
	}

	if (fmod(gcurrent, 5) != 0) {
		gcurrent -= fmod(gcurrent, 5);
		gct10 -= fmod(gcurrent, 5) * 10;
		gleft += fmod(gcurrent, 5) * 10;
	}

	tmp = gcurrent + (5 * gleft);

	while ((gct10 + geu2 + geu5) <= gbetrag && tmp > gbetrag) {
		gcurrent += 2;
		geu2++;
		gleft--;
		tmp = gcurrent + (5 * gleft);
	}

	while ((gct10 + geu2 + geu5) < gbetrag && gcurrent <= gbetrag) {
		gcurrent += 5;
		geu5++;
		gleft--;
	}

	cout << left << setw(7) << "10ct: " << setw(3) << gct10 << " STUECK" << endl;
	cout << left << setw(7) << "2eu: " << setw(3) << geu2 << " STUECK" << endl;
	cout << left << setw(7) << "5eu: " << setw(3) << geu5 << " STUECK" << endl;
	cout << left << setw(7) << "btr: " << setw(3) << gcurrent << " EUR" << endl;
	cout << left << setw(7) << "ges: " << setw(3) << geu2 + geu5 + gct10 << " STUECK" << endl;
}