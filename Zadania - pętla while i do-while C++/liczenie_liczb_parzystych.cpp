#include <iostream>
using namespace std;

int main() {
	int n;
	std::cout << "Podaj liczbe calkowita dodatnia N: ";
	cin >> n;
	
	short even_number_count = 0;
	short count = 1;
	do {
		if (count % 2 == 0) {
			even_number_count++;
		}
		count += 1;
	} while(count <= n);
	
	std::cout << "Liczba liczb parzystych od 1 do " << n << " wynosi: " << even_number_count << endl;

}
