#include <iostream>
using namespace std;

int main() {
	int number;
	std::cout << "Podaj liczbe calkowita: ";
	cin >> number;
	
	std::cout << "Liczba " << number << " jest ";
	if (number % 2 == 0) std::cout << "parzysta." << std::endl;
	else std::cout << "nieparzysta." << std::endl;
	
	std::cout << "Liczba " << number;
	if (number % 3 == 0) std::cout << " jest podzielna przez 3." << std::endl;
	else std::cout << " nie jest podzielna przez 3." << std::endl;
}