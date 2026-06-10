#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Osoba {
	string imie;
	string nazwisko;
	int wiek;
};

bool PlikIstnieje(string nazwa) {
	ifstream plik(nazwa);
	return plik.good();
}

void WyswietlZawartoscPliku(string nazwa) {
	ifstream plik(nazwa);
	string imie, nazwisko;
	int wiek;

	cout << "Dane w pliku po dopisaniu:" << endl;
	while (plik >> imie >> nazwisko >> wiek) {
		cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
	}
	plik.close();
}

int main() {
	string nazwaPliku = "dane.txt";
	char odpowiedz;

	if (!PlikIstnieje(nazwaPliku)) {
		cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykladowych danych..." << endl;

		ofstream plik(nazwaPliku);
		plik << "Jan Kowalski 25" << endl;
		plik << "Anna Nowak 30" << endl;
		plik.close();
	}

	cout << "Czy chcesz dodac nowa osobe? (t/n): ";
	cin >> odpowiedz;

	if (odpowiedz == 't') {
		Osoba osoba;

		cout << "Podaj imie: ";
		cin >> osoba.imie;
		cout << "Podaj nazwisko: ";
		cin >> osoba.nazwisko;
		cout << "Podaj wiek: ";
		cin >> osoba.wiek;

		ofstream plik(nazwaPliku, ios::app);
		plik << osoba.imie << " " << osoba.nazwisko << " " << osoba.wiek << endl;
		plik.close();

		cout << endl;
	}

	WyswietlZawartoscPliku(nazwaPliku);

	return 0;
}
