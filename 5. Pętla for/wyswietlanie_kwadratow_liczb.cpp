#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe N: ";
	cin >> n;
	
	std::cout << "Kwadraty liczb od 1 do " << n << ":" << endl;	
	
	for (int i = 1; i <= n; i++) {
		std::cout << i << "^2 = " << i * i << endl;
	}
		
}
