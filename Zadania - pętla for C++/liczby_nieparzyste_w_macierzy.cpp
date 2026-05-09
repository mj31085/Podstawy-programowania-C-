#include <iostream>
using namespace std;

int main() {
	int rows;
	int columns;
	int output_number = 1;
	
	std::cout << "Podaj liczbe wierszy: ";
	cin >> rows;
	
	std::cout << "Podaj liczbe kolumn: ";
	cin >> columns;
		
	for (int i = 1; i <= rows; i++) {
		for (int i = 1; i <= columns; i++) {
			if (output_number < 10) {
				std::cout << " ";
			}
			std::cout << output_number << " ";

			output_number = output_number + 2;
		}
		
		cout << endl;	
	}

}
