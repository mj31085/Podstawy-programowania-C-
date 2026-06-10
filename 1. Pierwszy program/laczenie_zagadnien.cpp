#include <iostream>
using namespace std;
int main() {
	int pierwsza_liczba;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> pierwsza_liczba;
	int druga_liczba;
	std::cout << "Podaj drugą liczbę: ";
	cin >> druga_liczba;
	int suma = pierwsza_liczba + druga_liczba;
	std::cout << "Suma: " << suma << std::endl;
	
	if(suma % 2 == 0) {
		std::cout << "Suma jest liczbą parzystą" << std::endl;
	} else {
		std::cout << "Suma jest liczbą nieparzystą" << std::endl;
	}
}
