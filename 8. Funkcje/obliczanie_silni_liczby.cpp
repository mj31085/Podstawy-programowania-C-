#include <iostream>
using namespace std;

int GetNumberFromUser() {
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	return liczba;
}

int CalculateFactorial(int n) {
	int silnia = 1;
	for (int i = 1; i <= n; i++) {
		silnia *= i;
	}
	return silnia;
}

void DisplayResult(int liczba, int silnia) {
	cout << "Silnia liczby " << liczba << " wynosi: " << silnia << endl;
}

int main() {
	int liczba = GetNumberFromUser();
	int silnia = CalculateFactorial(liczba);
	DisplayResult(liczba, silnia);

	return 0;
}
