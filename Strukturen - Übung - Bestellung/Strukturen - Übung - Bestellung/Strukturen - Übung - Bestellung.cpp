#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;


struct order_article
{
	string Datum;
	int Nummer;
	string Name;
	int Anzahl;
	double Preis;
};

order_article newOrderArticle();
void printOrderArticle(order_article currentOrderArticle);
double getSummToPay(vector<order_article> currentOrder);

int main()
{
	vector<order_article> user_order = {};

	char endInput = 'n';

	cout << "Herzlich Wilkommen in Ihrem Online-Lebensmittel-Shop!" << endl;
	cout << "===========================================================================" << endl;

	do {

		user_order.push_back(newOrderArticle());
		cout << "Noch eine Eingabe? j/n (n): ";
		cin >> endInput;

	} while (endInput == 'j' || endInput == 'J');

	cout << left << setw(20) << "Datum";
	cout << setw(30) << "Nummer";
	cout << setw(40) << "Name";
	cout << setw(20) << "Anzahl";
	cout << setw(20) << "Preis";
	cout << endl << setfill('=') << setw(130) << "" << endl << setfill(' ');

	for (int i = 0; i < user_order.size(); i++)
	{
		printOrderArticle(user_order.at(i));
	}

	cout << "Preis Ihrer Bestellung: " << fixed << setprecision(2) << getSummToPay(user_order) << endl;
}

order_article newOrderArticle() {

	order_article currentOrderArticle;

	cout << "Datum: ";
	cin >> currentOrderArticle.Datum;
	cout << "Artikelnummer: ";
	cin >> currentOrderArticle.Nummer;
	cout << "Artikelbezeichnung: ";
	cin >> currentOrderArticle.Name;
	cout << "Anzahl: ";
	cin >> currentOrderArticle.Anzahl;
	cout << "Preis: ";
	cin >> currentOrderArticle.Preis;

	return currentOrderArticle;
}

void printOrderArticle(order_article currentOrderArticle) {
	cout << left << setw(20) << currentOrderArticle.Datum;
	cout << setw(30) << currentOrderArticle.Nummer;
	cout << setw(40) << currentOrderArticle.Name;
	cout << setw(20) << currentOrderArticle.Anzahl;
	cout << right << setw(20) << currentOrderArticle.Preis;
	cout << endl;
}

double getSummToPay(vector<order_article> currentOrder) {
	double summToPay = 0;
	for (int i = 0; i < currentOrder.size(); i++)
	{
		order_article currentOrderArticle = currentOrder.at(i);
		summToPay += currentOrderArticle.Anzahl * currentOrderArticle.Preis;
	}
	return summToPay;
}

