#include <iostream>
using namespace std;

int main() {
	char again;

	do {
		int n;
		std::cout << "Podaj liczbe: ";
		cin >> n;
		std::cout << "Wprowadziles liczbe: " << n << endl;
		std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin >> again;
	} while (again == 't');

	std::cout << "Dziekuje za wprowadzenie liczb!" << endl;
}
