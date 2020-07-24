
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double nettoLohn, personalaufwand, bruttoLohn, lohnSteuer, kirchenSteuer,
		solidatitaetsBeitrag, krankenversicherung, rentenVersicherung,
		arbeitslosenVersicherung, pflegeVersicherung,
		kirchenSteuerResult, SolidaritaetsBeitragResult, RVResult, KVResult,
		AVresult,PVResult, nettoResult, personalaufwandResult, agAnteil, abzuege;

	kirchenSteuer = 0.08;
	solidatitaetsBeitrag = 0.05;
	rentenVersicherung = 0.187;
	krankenversicherung = 0.146;
	arbeitslosenVersicherung = 0.03;
	pflegeVersicherung = 0.0235;

	cout << "Programm: G E H A L T S A B R E C H N U N G" << endl;
	cout << "Bitte geben sie ihren Brutolohn ein: <EUR>: ";
	cin >> bruttoLohn;
	
	cout << "Bitte geben sie ihre Lohnsteuer ein <EUR>: ";
	cin >> lohnSteuer;

	system("cls");

	kirchenSteuerResult = lohnSteuer * 0.08;
	SolidaritaetsBeitragResult = lohnSteuer * 0.055;
	RVResult = bruttoLohn * rentenVersicherung * 0.5;
	KVResult = bruttoLohn * krankenversicherung * 0.5;
	AVresult = bruttoLohn * arbeitslosenVersicherung * 0.5;
	PVResult = bruttoLohn * pflegeVersicherung * 0.5;
	agAnteil = RVResult + KVResult + AVresult + PVResult;
	abzuege = kirchenSteuerResult + lohnSteuer + SolidaritaetsBeitragResult;
	nettoResult = bruttoLohn - kirchenSteuerResult - lohnSteuer - SolidaritaetsBeitragResult - agAnteil;
	personalaufwand = bruttoLohn + agAnteil;
	nettoLohn = bruttoLohn - kirchenSteuerResult - lohnSteuer - SolidaritaetsBeitragResult - agAnteil;

	cout << fixed << setprecision(2) << "Programm: G E H A L T S A B R E C H N U N G\n\n";
	cout << "Brutogehalt:         " << right << setw(47) << bruttoLohn << endl;
	cout << "Lohnsteuer:          " << right << setw(27) << lohnSteuer << endl;
	cout << "Kirchensteuer <" << kirchenSteuer << ">:" << right << setw(27) << kirchenSteuerResult << endl;
	cout << "Solidaritaetsbeitrag <" << solidatitaetsBeitrag << ">:" << right << setw(20) << SolidaritaetsBeitragResult << setw(20) << abzuege << endl;
	cout << "\n\nAN-Anteil zur Sozialversicherung:\n";
	cout << "-------------------------------------------------------\n";
	cout << "Rentenversicherung <" << rentenVersicherung << ">:" << right << setw(22) << RVResult << endl;
	cout << "krankenversicherung <" << krankenversicherung << ">:" << right << setw(21) << KVResult << endl;
	cout << "Arbeitslosenversicherung < " << arbeitslosenVersicherung << ">:" << right << setw(15) << AVresult << endl;;
	cout << "Pflegeversicherung <" << pflegeVersicherung << ">: " << right << setw(21) << PVResult << setw(20) << agAnteil << endl;
	cout << "\n\nNettoghalt:" << right << setw(57) << nettoLohn;
	cout << "\n\nPersonalaufwand:" << right << setw(52) << personalaufwand << endl;


}