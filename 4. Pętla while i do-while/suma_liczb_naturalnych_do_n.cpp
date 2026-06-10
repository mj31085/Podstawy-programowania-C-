#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe N: ";
	cin >> n;
	
	short count = 0;
	short sum = 0;
	while(count <= n) {
		sum += count; 
		count += 1;
	}
	
	std::cout << "Suma liczb naturalnych do " << n << ": " << sum << endl;
	
}
