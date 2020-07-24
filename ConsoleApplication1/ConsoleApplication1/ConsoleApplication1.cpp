#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	int iSchulnote;
	const string note1 = "Sehr gut!";
	const string note2 = "Gut!";
	const string note3 = "Befriedigend!";
	const string note4 = "Ausrechend!";
	const string note5 = "Mangelhaft!";
	const string note6 = "Ungenügend!";
	const string noWorries = "Du brauchst dir wegen deiner Schullaufbahn keine Gedanken zu machen.";
	const string worries = "Du solltest mehr lernen damit du die Schule gut abschließt.";
	const string wrongMessage = "Es wurde eine falsche Zahl eingegeben";

	cout << "Bitte gebe eine Schulnote als Zahl ein: ";
	cin >> iSchulnote;

	switch (iSchulnote) {
	case 1:
		cout << note1 << endl;
		break;
	case 2:
		cout << note2 << endl;
		break;
	case 3:
		cout << note3 << endl;
		break;
	case 4:
		cout << note4 << endl;
		break;
	case 5:
		cout << note5 << endl;
		break;
	case 6:
		cout << note6 << endl;
		break;
	default:
		cout << wrongMessage << endl;
		return 0;
	}
	
	if (iSchulnote < 4) {
		cout << noWorries << endl;
	}
	else {
		cout << worries << endl;
	}



	return 0;
}