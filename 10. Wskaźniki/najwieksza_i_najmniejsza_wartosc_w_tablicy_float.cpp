#include <iostream>
using namespace std;

void FindMinMax(float *tablica, int rozmiar, float *maksimum, float *minimum) {
	*maksimum = tablica[0];
	*minimum = tablica[0];

	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] > *maksimum) {
			*maksimum = tablica[i];
		}
		if (tablica[i] < *minimum) {
			*minimum = tablica[i];
		}
	}
}

int main() {
	float tablica[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
	float maksimum, minimum;

	cout << "Tablica: ";
	for (int i = 0; i < 10; i++) {
		cout << tablica[i] << " ";
	}
	cout << endl;

	FindMinMax(tablica, 10, &maksimum, &minimum);

	cout << "Najwieksza liczba: " << maksimum << endl;
	cout << "Najmniejsza liczba: " << minimum << endl;

	return 0;
}
