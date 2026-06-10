#include <iostream>
using namespace std;

double Suma(double a, double b) {
	return a + b;
}

double Roznica(double a, double b) {
	return a - b;
}

double Iloczyn(double a, double b) {
	return a * b;
}

double Iloraz(double a, double b) {
	return a / b;
}

int main() {
	int wybor;
	double liczba1, liczba2;

	while (true) {
		cout << "Wybierz funkcje:" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Roznica" << endl;
		cout << "3. Iloczyn" << endl;
		cout << "4. Iloraz" << endl;
		cout << "0. Wyjscie" << endl;
		cout << "Wybrana funkcja: ";
		cin >> wybor;

		if (wybor == 0) {
			cout << "Koniec programu." << endl;
			break;
		}

		cout << "Podaj pierwsza liczbe: ";
		cin >> liczba1;
		cout << "Podaj druga liczbe: ";
		cin >> liczba2;

		if (wybor == 1) {
			cout << "Wynik: " << Suma(liczba1, liczba2) << endl;
		} else if (wybor == 2) {
			cout << "Wynik: " << Roznica(liczba1, liczba2) << endl;
		} else if (wybor == 3) {
			cout << "Wynik: " << Iloczyn(liczba1, liczba2) << endl;
		} else if (wybor == 4) {
			cout << "Wynik: " << Iloraz(liczba1, liczba2) << endl;
		}

		cout << endl;
	}

	return 0;
}
