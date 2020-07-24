// Zugangskontrolle.cpp : Timo Woityschyn


#include <iostream>

using namespace std;

struct T_Zugang {
	string Name;
	int nummer;
	string Passwort;
};

const T_Zugang zugaenge[] = {
	{	"Meier",		1000,	"Erster"	},
	{	"Seiler",		3000,	"Dritter"	},
	{	"Schmidt",		4000,	"Vierter"	},
	{	"Hoffmann",		2000,	"Zweiter"	}
};

int main()
{
	bool loginSuccessfull = false;
	while (!loginSuccessfull)
	{
		string sInput;
		int iInput;
		cout << "Bitte gebe deinen Namen ein: ";
		cin >> sInput;

		for (T_Zugang zugang : zugaenge)
		{
			if (sInput == zugang.Name) {
				cout << "Bitte gebe deine Nummer ein: ";
				cin >> iInput;
				if (iInput == zugang.nummer) {

					cout << "Bitte gebe dein Passwort ein: ";
					cin >> sInput;

					if (sInput == zugang.Passwort) {
						loginSuccessfull = true;
					}
					else {
						loginSuccessfull = false;
					}
					break;
				}
				else {
					loginSuccessfull = false;
				}
				break;
			}
			else {
				loginSuccessfull = false;
			}
			break;
		}

		if (!loginSuccessfull) {
			cout << "Login nicht erfolgreich... :(" << endl;
		}
		else {
			cout << "Login erfolgreich" << endl;
		}
	}


	cin.get(); cin.get();
}