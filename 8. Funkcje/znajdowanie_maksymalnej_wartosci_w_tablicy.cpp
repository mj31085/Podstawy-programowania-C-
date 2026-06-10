#include <iostream>
using namespace std;

void GetArrayFromUser(int tablica[], int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		cout << "Podaj liczbe nr " << i + 1 << ": ";
		cin >> tablica[i];
	}
}

int FindMaxValue(int tablica[], int rozmiar) {
	int maksimum = tablica[0];
	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] > maksimum) {
			maksimum = tablica[i];
		}
	}
	return maksimum;
}

void DisplayResult(int maksimum) {
	cout << "Najwieksza liczba: " << maksimum << endl;
}

int main() {
	int tablica[5];

	GetArrayFromUser(tablica, 5);
	int maksimum = FindMaxValue(tablica, 5);
	DisplayResult(maksimum);

	return 0;
}
