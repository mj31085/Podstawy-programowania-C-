#include <iostream>
using namespace std;
int main() {
	int pierwsza_liczba;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> pierwsza_liczba;
	int druga_liczba;
	std::cout << "Podaj drugą liczbę: ";
	cin >> druga_liczba;
	std::cout << "Suma: " << pierwsza_liczba + druga_liczba << std::endl;
	std::cout << "Iloczyn: " << pierwsza_liczba * druga_liczba << std::endl;
	std::cout << "Iloraz: " << pierwsza_liczba / druga_liczba << std::endl;
	std::cout << "Reszta z dzielenia: " << pierwsza_liczba % druga_liczba << std::endl;
}
