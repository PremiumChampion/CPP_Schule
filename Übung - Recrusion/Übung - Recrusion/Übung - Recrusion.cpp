
#include <iostream>
#include <map>
#include <iomanip>
#include "Summe.h"
#include "ModuloZehn.h"
#include "EAN.h"

using namespace std;

int fakultaet(int number);
int querSumme(int number);
long double fibonacci(long double count);


int main()
{
	cout << fakultaet(5) << endl;
	cout << querSumme(12345) << endl;
	cout << Summe(5) << endl;
	cout << CalculateChecksum(47111111) << endl;
	cout << calculateEANChechsum(400262780027) << endl;
	cout << calculateEANChechsum("400262780027") << endl;
	//int i = 100;
	//cout << fixed << setprecision(0) << fibonacci(i) << endl;

	/*while (true)
	{
		i++;
		cout << fixed << setprecision(0) << fibonacci(i) << endl;
	}*/
	cout << endl;
}

int fakultaet(int number) {
	if (number == 1) {
		return number;
	}
	else {
		return number * fakultaet(number - 1);
	}
}

int querSumme(int number) {
	if (number < 10) {
		return number;
	}
	else {
		return number % 10 + querSumme(number / 10);
	}
}


long double fibonacci(long double n)
{
	if (n < 1) {
		return 0;
	}
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

	/*static std::map<double, double> values;

	if (n == 0 || n == 1)
		return n;

	std::map<double, double>::iterator iter = values.find(n);

	if (iter == values.end())
	{
		return values[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
	else
	{
		return iter->second;
	}*/
}