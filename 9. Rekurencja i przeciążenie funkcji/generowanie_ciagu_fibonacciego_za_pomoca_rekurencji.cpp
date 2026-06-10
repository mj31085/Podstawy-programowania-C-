#include <iostream>
using namespace std;

int GetNumberFromUser() {
	int liczba_elementow;
	cout << "Podaj liczbe elementow: ";
	cin >> liczba_elementow;
	return liczba_elementow;
}

int CalculateFibonacciRecursive(int indeks) {
	if (indeks == 1 || indeks == 2) {
		return 1;
	}
	return CalculateFibonacciRecursive(indeks - 1) + CalculateFibonacciRecursive(indeks - 2);
}

void DisplayFibonacciSequence(int liczba_elementow) {
	cout << "Ciag Fibonacciego: ";
	for (int i = 1; i <= liczba_elementow; i++) {
		cout << CalculateFibonacciRecursive(i);
		if (i < liczba_elementow) {
			cout << ", ";
		}
	}
	cout << endl;
}

int main() {
	int liczba_elementow = GetNumberFromUser();
	DisplayFibonacciSequence(liczba_elementow);

	return 0;
}
