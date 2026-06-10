#include <iostream>
using namespace std;

int main() {
    int szerokosc;
    int wysokosc;
    string poprzedni_znak = "*";

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 1; i <= wysokosc; i++) {
        for (int j = 1; j <= szerokosc; j++) {
        	if (i == 1 || i == wysokosc) {
        		cout << "-";
			}else if ( j == 1 || j == szerokosc) {
                cout << "|";
            }
            else {
                cout << poprzedni_znak;
                if (poprzedni_znak == "*") {
                	poprzedni_znak = "#";
				}else if (poprzedni_znak == "#") {
					poprzedni_znak = "*";
				}
            }
        }

        cout << endl;
    }

    return 0;
}
