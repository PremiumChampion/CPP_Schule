#include <iostream>

using namespace std;

int fakultaet(int number);
int querSumme(int number);
int fibonacci(double count);

int main()
{
	cout << fakultaet(5) << endl;
	cout << querSumme(12345) << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << fibonacci(i) << "  ";
	}
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

int fibonacci(double count) {
	if (count < 1) {
		return 0;
	}
	if (count == 1 || count == 2) {
		return 1;
	}
	else {
		return fibonacci(count - 1) + fibonacci(count - 2);
	}
}