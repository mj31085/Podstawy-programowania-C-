#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tablica, int rozmiar, int poczatek, int koniec) {
	for (int i = 0; i < rozmiar; i++) {
		tablica[i] = poczatek + rand() % (koniec - poczatek + 1);
	}
}

bool SprawdzLiczbe(int liczba, int *tablica, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		if (liczba == tablica[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	srand(time(NULL));

	int rozmiar, poczatek, koniec;
	int liczba;
	int proby = 0;

	cout << "Ile liczb wylosowac: ";
	cin >> rozmiar;
	cout << "Wartosc poczatkowa: ";
	cin >> poczatek;
	cout << "Wartosc koncowa: ";
	cin >> koniec;

	int *tablica = new int[rozmiar];
	LosujTablice(tablica, rozmiar, poczatek, koniec);

	cout << "Tablica: ";
	for (int i = 0; i < rozmiar; i++) {
		cout << tablica[i] << ", ";
	}
	cout << endl << endl;

	while (true) {
		cout << "Podaj liczbe: ";
		cin >> liczba;
		proby++;

		if (SprawdzLiczbe(liczba, tablica, rozmiar)) {
			cout << "Zgadles!" << endl;
			cout << "Zgadles za " << proby << " razem." << endl;
			break;
		} else {
			cout << "Nie zgadles" << endl;
		}
	}

	delete[] tablica;

	return 0;
}
