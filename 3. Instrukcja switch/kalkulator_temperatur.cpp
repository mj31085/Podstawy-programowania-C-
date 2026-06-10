#include <iostream>
using namespace std;

int main() {
	int temperatura;
	std::cout << "Podaj temperatura w stopniach Celsjusza: ";
	cin >> temperatura;
	char jednostka_docelowa;
	std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> jednostka_docelowa;
	
	switch(jednostka_docelowa) {
		case 'K':
			cout << "Temperatura w stopniach Kelvina: " << temperatura + 273.15 << endl;
			break;
		case 'F':
			cout << "Temperatura w stopniach Fahrenheita: " << (temperatura * 9/5) + 32 << endl;
			break;
		default:
			cout << "Błąd. Wprowadzono nieznana jednostke docelowa." << endl;
			break;	
	}
}
