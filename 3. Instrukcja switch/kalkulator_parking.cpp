#include <iostream>
using namespace std;

int main() {
	int liczba_godzin;
	std::cout << "Podaj liczbe godzin parkowania: ";
	cin >> liczba_godzin;
	char rodzaj_pojazdu;
	std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	cin >> rodzaj_pojazdu;
	
	switch(rodzaj_pojazdu) {
		case 'S':
			cout << "Oplata za parkowanie: " << liczba_godzin * 5 << " zl" << endl;
			break;
		case 'M':
			cout << "Oplata za parkowanie: " << liczba_godzin * 3 << " zl" << endl;
			break;
		case 'A':
			cout << "Oplata za parkowanie: " << liczba_godzin * 10 << " zl" << endl;
			break;	
		default:
			cout << "Blad. Wprowadzono nieznany rodzaj pojazdu." << endl;
			break;	
	}
}
