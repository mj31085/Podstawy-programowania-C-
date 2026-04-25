#include <iostream>
using namespace std;

int main() {
	int hours_count;
	std::cout << "Podaj liczbe godzin parkowania: ";
	cin >> hours_count;
	char vehicle_type;
	std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	cin >> vehicle_type;
	
	switch(vehicle_type) {
		case 'S':
			cout << "Oplata za parkowanie: " << hours_count * 5 << " zl" << endl;
			break;
		case 'M':
			cout << "Oplata za parkowanie: " << hours_count * 3 << " zl" << endl;
			break;
		case 'A':
			cout << "Oplata za parkowanie: " << hours_count * 10 << " zl" << endl;
			break;	
		default:
			cout << "Blad. Wprowadzono nieznany rodzaj pojazdu." << endl;
			break;	
	}
}
