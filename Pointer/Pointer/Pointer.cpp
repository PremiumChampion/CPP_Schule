#include <iostream>

using namespace std;

void vertausche(int* a, int* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void setzeWert(int neuerWert);

void funk(int* wert);

int main()
{
	int a = 1, b = 1;
	int* p_a = &a, * p_b = &b;
	cout << "p_a:" << p_a << "p_b:" << p_b << endl;
	*p_a = 157;
	cout << "a:" << *p_a << "b:" << *p_b << endl;
	int arr[5] = { 1,2,3,4,5 };
	int* p_int1 = arr;
	int* p_int2 = &arr[1];
	vertausche(p_int1, p_int2);
	cout << arr[0] << arr[1] << endl;
	int zahl = 10;
	cout << "i = " << zahl;
	funk(&zahl);
	cout << "i = " << zahl;
	cin.get(); cin.get();
	return 0;

}

void setzeWert(int neuerWert)
{
	cout << "In setzeWert alter Wert : " << neuerWert;
	neuerWert = 20;
	cout << "In setzeWert neuer Wert : " << neuerWert;
}

void funk(int* wert)
{
	*wert = *wert + 5;
	cout << "i = " << wert;
}
