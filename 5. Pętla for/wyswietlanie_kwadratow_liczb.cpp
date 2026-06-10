#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe N: ";
	cin >> liczba;
	
	std::cout << "Kwadraty liczb od 1 do " << liczba << ":" << endl;	
	
	for (int i = 1; i <= liczba; i++) {
		std::cout << i << "^2 = " << i * i << endl;
	}
		
}
