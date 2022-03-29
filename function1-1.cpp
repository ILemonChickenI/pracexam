#include <iostream>

using namespace std;

int* readNumbers() {
	int n = 10;
	int* numarray = new int[n];

	for (int a = 0; a < 10; a++) {
		cin >> numarray[a];
	}
	return numarray;
}

void printNumbers(int* numbers, int length) {

	for (int c = 0; c < length; c = c + 2) {
		cout << numbers[c] << " " << numbers[c + 1] << endl;
	}
}