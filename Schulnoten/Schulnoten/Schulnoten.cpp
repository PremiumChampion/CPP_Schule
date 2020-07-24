#include <iostream>
using namespace std;
int main()
{
	int schulnote;
	while (true)
	{
		cout << "Bitte gebe deine Schulnote ein: ";
		cin >> schulnote;

		switch (schulnote)
		{
		case 1:
			cout << "Sehr gute Arbeit";
			break;
		case 2:
			cout << "Gute Arbeit";
			break;
		case 3:
			cout << "Befriedigende Arbeit";
			break;
		case 4:
			cout << "Ausreichende Arbeit";
			break;
		case 5:
			cout << "Mangelhafte Arbeit";
			break;
		case 6:
			cout << "ungenügende Arbeit";
			break;
		default:
			cout << "Falscheingabe";
			break;
		}
		cout << "\n";
	}
}