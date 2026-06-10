#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void DuzaMala(int liczba, int wylosowanaLiczba) {
	if (liczba < wylosowanaLiczba) {
		cout << "Za malo" << endl;
	} else if (liczba > wylosowanaLiczba) {
		cout << "Za duzo" << endl;
	}
}

bool CheckLiczba(int liczba, int wylosowanaLiczba) {
	return liczba == wylosowanaLiczba;
}

int main() {
	srand(time(NULL));
	int wylosowanaLiczba = (rand() % 100) + 1;
	int liczba;

	while (true) {
		cout << "Podaj liczbe: ";
		cin >> liczba;

		if (CheckLiczba(liczba, wylosowanaLiczba)) {
			cout << "Gratulacje! Odgadles liczbe." << endl;
			break;
		}

		DuzaMala(liczba, wylosowanaLiczba);
	}

	return 0;
}
