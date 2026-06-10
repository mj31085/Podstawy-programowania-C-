#include <iostream>
using namespace std;

int main() {
	int liczba;
	std::cout << "Podaj liczbe N: ";
	cin >> liczba;
	
	std::cout << "Liczb nieparzyste od 1 do " << liczba << ":" << endl;	
	
	for (int i = 1; i <= liczba; i++) {
		if (i % 2 != 0) {
			std::cout << i << endl;
		}
	}

}
