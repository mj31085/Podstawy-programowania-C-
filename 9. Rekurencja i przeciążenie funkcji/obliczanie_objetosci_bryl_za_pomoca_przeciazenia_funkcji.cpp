#include <iostream>
using namespace std;

int CalculateVolume(int bok) {
	return bok * bok * bok;
}

int CalculateVolume(int dlugosc, int szerokosc, int wysokosc) {
	return dlugosc * szerokosc * wysokosc;
}

double CalculateVolume(double promien, double wysokosc) {
	return 3.1415 * promien * promien * wysokosc;
}

void DisplayResult(double objetosc) {
	cout << "Objetosc wynosi: " << objetosc << endl;
}

int main() {
	int wybor;

	cout << "Wybierz bryle do obliczenia objetosci:" << endl;
	cout << "1 - Szescian (V = a^3)" << endl;
	cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
	cout << "3 - Walec (V = pi * r^2 * h)" << endl;
	cout << "Wybierz numer bryly: ";
	cin >> wybor;

	if (wybor == 1) {
		int bok;
		cout << "Podaj dlugosc boku: ";
		cin >> bok;
		DisplayResult(CalculateVolume(bok));
	} else if (wybor == 2) {
		int dlugosc, szerokosc, wysokosc;
		cout << "Podaj dlugosc: ";
		cin >> dlugosc;
		cout << "Podaj szerokosc: ";
		cin >> szerokosc;
		cout << "Podaj wysokosc: ";
		cin >> wysokosc;
		DisplayResult(CalculateVolume(dlugosc, szerokosc, wysokosc));
	} else if (wybor == 3) {
		double promien, wysokosc;
		cout << "Podaj promien: ";
		cin >> promien;
		cout << "Podaj wysokosc: ";
		cin >> wysokosc;
		DisplayResult(CalculateVolume(promien, wysokosc));
	}

	return 0;
}
