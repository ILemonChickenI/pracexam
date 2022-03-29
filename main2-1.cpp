#include <iostream>
#include <your_readnumbers.h>

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

void hexDigits(int* numbers, int length) {
    for (int n = 0; n < length; n++) {
        cout << n << " " << numbers[n] << " ";
        switch (numbers[n])
        {
        case 10:
            cout << "A" << endl;
            break;
        case 11:
            cout << "B" << endl;
            break;
        case 12:
            cout << "C" << endl;
            break;
        case 13:
            cout << "D" << endl;
            break;
        case 14:
            cout << "E" << endl;
            break;
        case 15:
            cout << "F" << endl;
            break;
        case 16:
            cout << "G" << endl;
            break;
        default:
            cout << numbers[n] << endl;
            break;
        }
    }
}

int main(){
    int* num_array = readNumbers();
	hexDigits(num_array, 10);
}