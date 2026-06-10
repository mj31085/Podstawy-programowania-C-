#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

bool PlikIstnieje(string nazwa) {
	ifstream plik(nazwa);
	return plik.good();
}

int main() {
	int wybor;
	string nazwa, nowaNazwa;

	cout << "Wybierz operacje:" << endl;
	cout << "1 - Utworz nowy plik" << endl;
	cout << "2 - Usun plik" << endl;
	cout << "3 - Zmien nazwe pliku" << endl;
	cout << "Twoj wybor: ";
	cin >> wybor;

	if (wybor == 1) {
		cout << endl;
		cout << "Podaj nazwe nowego pliku: ";
		cin >> nazwa;

		ofstream plik(nazwa);
		plik.close();

		cout << endl;
		cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
	} else if (wybor == 2) {
		cout << endl;
		cout << "Podaj nazwe pliku do usuniecia: ";
		cin >> nazwa;

		cout << endl;
		if (PlikIstnieje(nazwa)) {
			if (remove(nazwa.c_str()) == 0) {
				cout << "Plik '" << nazwa << "' zostal usuniety." << endl;
			} else {
				cout << "Blad podczas usuwania pliku!" << endl;
			}
		} else {
			cout << "Plik nie istnieje!" << endl;
		}
	} else if (wybor == 3) {
		cout << endl;
		cout << "Podaj nazwe pliku do zmiany: ";
		cin >> nazwa;
		cout << "Podaj nowa nazwe pliku: ";
		cin >> nowaNazwa;

		cout << endl;
		if (PlikIstnieje(nazwa)) {
			if (rename(nazwa.c_str(), nowaNazwa.c_str()) == 0) {
				cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << endl;
			} else {
				cout << "Blad podczas zmiany nazwy pliku!" << endl;
			}
		} else {
			cout << "Plik nie istnieje!" << endl;
		}
	}

	return 0;
}
