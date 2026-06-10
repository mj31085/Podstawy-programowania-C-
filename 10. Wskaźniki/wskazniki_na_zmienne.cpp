#include <iostream>
using namespace std;

int main() {
	int liczba_a = 5;
	int liczba_b = 10;

	int *wskaznik_a = &liczba_a;
	int *wskaznik_b = &liczba_b;

	cout << "Przed modyfikacja:" << endl;
	cout << "a = " << liczba_a << endl;
	cout << "b = " << liczba_b << endl;

	*wskaznik_a = 15;
	*wskaznik_b = 20;

	cout << endl;
	cout << "Po modyfikacji:" << endl;
	cout << "a = " << liczba_a << endl;
	cout << "b = " << liczba_b << endl;

	return 0;
}
