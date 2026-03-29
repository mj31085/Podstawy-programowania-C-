#include <iostream>
using namespace std;

int main() {
	int temperature;
	std::cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >> temperature;
	char target_unit;
	std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
	cin >> target_unit;
	
	switch(target_unit) {
		case 'K':
			cout << "Temperatura w stopniach Kelvina: " << temperature + 273.15 << endl;
			break;
		case 'F':
			cout << "Temperatura w stopniach Fahrenheita: " << (temperature * 9/5) + 32 << endl;
			break;
		default:
			cout << "Błąd. Wprowadzono nieznana jednostke docelowa." << endl;
			break;	
	}
}
