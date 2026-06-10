#include <iostream>
using namespace std;
int main() {
	string imie;
	std::cout << "Podaj swoje imię: ";
	cin >> imie;
	short wiek;
	std::cout << "Podaj swój wiek: ";
	cin >> wiek;
	std::cout << "Witaj, " << imie << "! Masz " << wiek << " lat.";
}
