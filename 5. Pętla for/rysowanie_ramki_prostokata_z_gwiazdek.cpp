#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;

    cout << "Podaj szerokosc: ";
    cin >> rows;

    cout << "Podaj wysokosc: ";
    cin >> columns;

    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == columns || j == 1 || j == rows) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}