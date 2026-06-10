#include <iostream>
using namespace std;

int main() {
	int exam_score;
	std::cout << "Podaj wynik egzaminu (liczba punktow): ";
	cin >> exam_score;
	
	if (exam_score <= 49) std::cout << "Ocena: Niedostateczna";
	else if (exam_score <= 69) std::cout << "Ocena: Dostateczna";
	else if (exam_score <= 84) std::cout << "Ocena: Dobra";
	else if (exam_score <= 99) std::cout << "Ocena: Bardzo dobra";
	else if (exam_score == 100) std::cout << "Ocena: Celująca";
}