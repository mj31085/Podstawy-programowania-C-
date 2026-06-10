#include <iostream>
using namespace std;

int main() {
    int szerokosc;
    int wysokosc;
    int margines = 0;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {

        for (int j = 0; j < szerokosc; j++) {

            if (j >= margines && j < szerokosc - margines) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
        margines++;
    }

    return 0;
}
