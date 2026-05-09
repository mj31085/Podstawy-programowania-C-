#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe N: ";
	cin >> n;
	
	std::cout << "Liczb nieparzyste od 1 do " << n << ":" << endl;	
	
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			std::cout << i << endl;
		}
	}

}
