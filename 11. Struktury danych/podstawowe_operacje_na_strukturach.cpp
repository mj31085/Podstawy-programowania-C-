#include <iostream>
#include <string>
using namespace std;

struct Osoba {
	string imie;
	string nazwisko;
	int wiek;
};

int main() {
	Osoba osoba = {"Jan", "Kowalski", 25};

	cout << "Dane przed modyfikacja:" << endl;
	cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;

	osoba.wiek = 30;

	cout << endl;
	cout << "Dane po modyfikacji:" << endl;
	cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;

	return 0;
}
