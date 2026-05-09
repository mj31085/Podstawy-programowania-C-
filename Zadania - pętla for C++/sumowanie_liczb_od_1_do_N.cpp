#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe N: ";
	cin >> n;
	
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i; 
	}
	
	std::cout << "Suma liczb od 1 do " << n << " wynosi: " << sum << endl;
	
}
