#include <iostream>
using namespace std;


int main()
{
	float breite;
	float hoehe;
	float flaecheninhalt;
	cout << "Bitte Breite eingeben!" << endl;
	cin >> breite;
	cout << "Bitte Hoehe eingeben!" << endl;
	cin >> hoehe;
	flaecheninhalt = hoehe * breite;
	cout << "Hoehe: " << hoehe << "; Breite: " << breite << endl;
	if (hoehe == breite) {
		cout << "Ein Quadrat mit der Fläche : " << flaecheninhalt << endl;
	}
	else {
		cout << "Ein Rechteck mit der Fläche :" << flaecheninhalt << endl;
	}
	cin.get(); cin.get();
}
