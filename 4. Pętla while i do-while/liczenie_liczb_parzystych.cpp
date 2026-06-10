#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe calkowita dodatnia N: ";
	cin >> liczba;
	
	short licznik_parzystych = 0;
	short licznik = 1;
	do {
		if (licznik % 2 == 0) {
			licznik_parzystych++;
		}
		licznik += 1;
	} while(licznik <= liczba);
	
	std::cout << "Liczba liczb parzystych od 1 do " << liczba << " wynosi: " << licznik_parzystych << endl;

}
