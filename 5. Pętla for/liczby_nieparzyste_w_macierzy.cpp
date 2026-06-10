#include <iostream>
using namespace std;

int main() {
	int wiersze;
	int kolumny;
	int liczba_wyjsciowa = 1;
	
	std::cout << "Podaj liczbe wierszy: ";
	cin >> wiersze;
	
	std::cout << "Podaj liczbe kolumn: ";
	cin >> kolumny;
		
	for (int i = 1; i <= wiersze; i++) {
		for (int j = 1; j <= kolumny; j++) {
			if (liczba_wyjsciowa < 10) {
				std::cout << " ";
			}
			std::cout << liczba_wyjsciowa << " ";

			liczba_wyjsciowa = liczba_wyjsciowa + 2;
		}
		
		cout << endl;	
	}

}
