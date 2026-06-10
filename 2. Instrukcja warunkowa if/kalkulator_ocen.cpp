#include <iostream>
using namespace std;

int main() {
	int wynik_egzaminu;
	std::cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> wynik_egzaminu;
	
	if (wynik_egzaminu <= 49) std::cout << "Ocena: Niedostateczna";
	else if (wynik_egzaminu <= 69) std::cout << "Ocena: Dostateczna";
	else if (wynik_egzaminu <= 84) std::cout << "Ocena: Dobra";
	else if (wynik_egzaminu <= 99) std::cout << "Ocena: Bardzo dobra";
	else if (wynik_egzaminu == 100) std::cout << "Ocena: Celująca";
}