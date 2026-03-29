#include <iostream>
using namespace std;
int main() {
	string name;
	std::cout << "Podaj swoje imię: ";
	cin >> name;
	short age;
	std::cout << "Podaj swój wiek: ";
	cin >> age;
	std::cout << "Witaj, " << name << "! Masz " << age << " lat.";
}