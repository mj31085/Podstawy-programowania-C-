#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe N: ";
	cin >> liczba;
	
	int suma = 0;
	for (int i = 0; i <= liczba; i++) {
		suma += i; 
	}
	
	std::cout << "Suma liczb od 1 do " << liczba << " wynosi: " << suma << endl;
	
}
