#include <iostream>
using namespace std;

int main() {
	int first_number;
	std::cout << "Podaj pierwszą liczbę: ";
	cin >> first_number;
	int second_number;
	std::cout << "Podaj drugą liczbę: ";
	cin >> second_number;
	char operation;
	std::cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> operation;
	
	switch(operation) {
	case '+':
		cout << "Wynik: " << first_number + second_number << endl;
		break;
	case '-':
		cout << "Wynik: " << first_number - second_number << endl;
		break;
	case '*':
		cout << "Wynik: " << first_number * second_number << endl;
		break;
	case '/':
		cout << "Wynik: " << first_number / second_number << endl;
		break;
	default:
		cout << "Błąd. Wprowadzono nieznany znak dzialania." << endl;
		break;	
	}
}