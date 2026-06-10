#include <iostream>
using namespace std;

int GetNumberFromUser() {
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	return liczba;
}

int CalculateSumRecursive(int liczba) {
	if (liczba == 1) {
		return 1;
	}
	return liczba + CalculateSumRecursive(liczba - 1);
}

void DisplayResult(int liczba, int suma) {
	cout << "Suma liczb od 1 do " << liczba << " wynosi: " << suma << endl;
}

int main() {
	int liczba = GetNumberFromUser();
	int suma = CalculateSumRecursive(liczba);
	DisplayResult(liczba, suma);

	return 0;
}
