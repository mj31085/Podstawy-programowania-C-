#include <iostream>
using namespace std;

int main() {
	char odpowiedz;

	do {
		int liczba;
		std::cout << "Podaj liczbe: ";
		cin >> liczba;
		std::cout << "Wprowadziles liczbe: " << liczba << endl;
		std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin >> odpowiedz;
	} while (odpowiedz == 't');

	std::cout << "Dziekuje za wprowadzenie liczb!" << endl;
}
