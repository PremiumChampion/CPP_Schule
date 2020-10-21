#pragma once


int CalculateChecksum(int customerNumber) {
	int count = 2;
	int summe = 0;
	while (customerNumber > 0) {
		summe += (customerNumber % 10) * count;
		count++;
		customerNumber = customerNumber / 10;
	}
	return 10 - (summe % 10);
}
