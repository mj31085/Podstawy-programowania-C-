#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	
	std::cout << "Liczba " << liczba << " jest ";
	if (liczba % 2 == 0) std::cout << "parzysta." << std::endl;
	else std::cout << "nieparzysta." << std::endl;
	
	std::cout << "Liczba " << liczba;
	if (liczba % 3 == 0) std::cout << " jest podzielna przez 3." << std::endl;
	else std::cout << " nie jest podzielna przez 3." << std::endl;
}