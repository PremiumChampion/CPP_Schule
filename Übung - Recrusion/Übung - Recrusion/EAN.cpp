#pragma once
#include <iostream>
#include "EAN.h"
using namespace std;

int calculateEANChechsum(string ean) {
	int even = 0;
	int uneven = 0;

	for (int i = 0; i < ean.length(); i++) {
		if (i % 2 == 0) {
			even += ean[i] - '0';
		}
		else {
			uneven += ean[i] - '0';
		}
	}

	return ((((even * 3 + uneven * 1) / 10) + 1) * 10) - (even * 3 + uneven * 1);
}

int calculateEANChechsum(long int ean) {
	int chechsum;

	int even = 0;
	int uneven = 0;
	int i = 0;

	while (ean > 0) {
		if (i % 2 == 0) {
			uneven += ean % 10;
		}
		else {
			even += ean % 10;
		}
		ean = ean / 10;
		i++;
	}

	int sum = even * 3 + uneven * 1;
	int vielfaches = (sum / 10) + 1;
	vielfaches *= 10;

	chechsum = vielfaches - sum;

	return chechsum;
}