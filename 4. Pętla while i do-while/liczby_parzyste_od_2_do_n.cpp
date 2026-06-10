#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe N: ";
	cin >> n;
	
	std::cout << "Liczby parzyste od 2 do " << n << endl;
	short count = 2;
	while(count <= n) {
		if (count % 2 == 0) {
			std::cout << count << endl;
		}
		count += 1;
	}
}
