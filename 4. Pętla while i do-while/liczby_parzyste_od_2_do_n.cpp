#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe N: ";
	cin >> liczba;
	
	std::cout << "Liczby parzyste od 2 do " << liczba << ": " << endl;
	short licznik = 2;
	while(licznik <= liczba) {
		if (licznik % 2 == 0) {
			std::cout << licznik << endl;
		}
		licznik += 1;
	}
}
