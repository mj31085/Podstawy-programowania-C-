#include <iostream>
using namespace std;

int main() {
	int waga;
	std::cout << "Podaj wage (w kg): ";
	cin >> waga;
	float wzrost;
	std::cout << "Podaj wzrost (w metrach): ";
	cin >> wzrost;
	
	float bmi = waga / (wzrost * wzrost);
	std::cout << "Twoje BMI wynosi: " << bmi << std::endl;
	std::cout << "Twój stan wagowy: ";
	if (bmi <= 18.5) std::cout << "Niedowaga";
	else if (bmi <= 24.9) std::cout << "W normie";
	else if (bmi <= 29.9) std::cout << "Nadwaga";
	else if (bmi > 30) std::cout << "Nadwaga";
}