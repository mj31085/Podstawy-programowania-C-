#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe N: ";
	cin >> liczba;
	
	short licznik = 0;
	short suma = 0;
	while(licznik <= liczba) {
		suma += licznik; 
		licznik += 1;
	}
	
	std::cout << "Suma liczb naturalnych do " << liczba << ": " << suma << endl;
	
}
