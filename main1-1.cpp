#include <iostream>
#include <function1-1.h>

using namespace std;

int main() {
	int *my_array = readNumbers();

	cout << "The input array is: ";

	for (int b = 0; b < 10; b++) {
		cout << my_array[b] << " ";
	}

	cout << endl;
	cout << "---------------------------" <<endl;
	printNumbers(my_array, 10);

	delete[] my_array;

	return 0;
}