#include <iostream>
using namespace std;

int main() {
	char again = 't';
	
	while(again == 't') {
		int n;
		std::cout << "Podaj liczbe: ";
		cin >> n;
		std::cout << "Wprowadziles liczbe:" << n << endl;
		std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n)";
		cin >> again;
		switch(again) {
			case 't':
				break;
			case 'n':
				cout << "Dziekuje za wprowadzenie liczb!" << endl;
				again = 'n';
				break;
			default:
				cout << "Blad. Wprowadzono nieznana odpowiedz." << endl;
				again = 'n';
				break;	
		}
	}
}
