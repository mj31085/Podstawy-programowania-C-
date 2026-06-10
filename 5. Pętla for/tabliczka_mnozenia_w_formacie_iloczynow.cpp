#include <iostream>
using namespace std;

int main() {
	int liczba;
	
	std::cout << "Podaj liczbe liczbe N: ";
	cin >> liczba;
	
		
	for (int i = 1; i <= liczba; i++) {
		for (int j = 1; j <= liczba; j++) {
			std::cout << i << " * " << j << " = " << i * j << endl;
		}
		
		cout << endl;	
	}

}
