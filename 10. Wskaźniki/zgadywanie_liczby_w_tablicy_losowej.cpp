#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tablica, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = rand() % 51;
	}
}

bool SprawdzLiczbe(int *liczba, int *tablica, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		if (*liczba == tablica[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	srand(time(NULL));

	int tablica[10];
	int rozmiar = 10;
	int liczba;
	int proby = 0;

	LosujTablice(tablica, rozmiar);

	cout << "Tablica: ";
	for (int i = 0; i < rozmiar; i++) {
		cout << tablica[i] << ", ";
	}
	cout << endl;

	while (true) {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		proby++;

		if (SprawdzLiczbe(&liczba, tablica, rozmiar)) {
			cout << "Zgadles!" << endl;
			cout << "Zgadles za " << proby << " razem." << endl;
			break;
		} else {
			cout << "Nie zgadles" << endl;
		}
	}

	return 0;
}
