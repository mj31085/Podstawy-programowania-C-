#include <iostream>
using namespace std;
int main() {
	int first_number;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> first_number;
	int second_number;
	std::cout << "Podaj drugą liczbę: ";
	cin >> second_number;
	std::cout << "Suma: " << first_number + second_number << std::endl;
	std::cout << "Iloczyn: " << first_number * second_number << std::endl;
	std::cout << "Iloraz: " << first_number / second_number << std::endl;
	std::cout << "Reszta z dzielenia: " << first_number % second_number << std::endl;
}