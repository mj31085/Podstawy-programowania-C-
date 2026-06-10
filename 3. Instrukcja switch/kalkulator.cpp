#include <iostream>
using namespace std;

int main() {
	int pierwsza_liczba;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> pierwsza_liczba;
	int druga_liczba;
	std::cout << "Podaj drugą liczbę: ";
	cin >> druga_liczba;
	char operacja;
	std::cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> operacja;
	
	switch(operacja) {
	case '+':
		cout << "Wynik: " << pierwsza_liczba + druga_liczba << endl;
		break;
	case '-':
		cout << "Wynik: " << pierwsza_liczba - druga_liczba << endl;
		break;
	case '*':
		cout << "Wynik: " << pierwsza_liczba * druga_liczba << endl;
		break;
	case '/':
		cout << "Wynik: " << pierwsza_liczba / druga_liczba << endl;
		break;
	default:
		cout << "Błąd. Wprowadzono nieznany znak dzialania." << endl;
		break;	
	}
}