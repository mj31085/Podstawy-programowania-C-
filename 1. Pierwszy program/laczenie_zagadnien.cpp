#include <iostream>
using namespace std;
int main() {
	int first_number;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> first_number;
	int second_number;
	std::cout << "Podaj drugą liczbę: ";
	cin >> second_number;
	int sum = first_number + second_number;
	std::cout << "Suma: " << sum << std::endl;
	
	if(sum % 2 == 0) {
		std::cout << "Suma jest liczbą parzystą" << std::endl;
	} else {
		std::cout << "Suma jest liczbą nieparzystą" << std::endl;
	}
}