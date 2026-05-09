#include <iostream>
using namespace std;

int main() {
    int width;
    int height;
    int margin = 0;

    cout << "Podaj szerokosc: ";
    cin >> width;

    cout << "Podaj wysokosc: ";
    cin >> height;

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < width; j++) {

            if (j >= margin && j < width - margin) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
        margin++;
    }

    return 0;
}