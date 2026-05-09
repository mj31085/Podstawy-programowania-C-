#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;
    string previous_char = "*";

    cout << "Podaj szerokosc: ";
    cin >> rows;

    cout << "Podaj wysokosc: ";
    cin >> columns;

    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= rows; j++) {
        	if (i == 1 || i == columns) {
        		cout << "-";
			}else if ( j == 1 || j == rows) {
                cout << "|";
            }
            else {
                cout << previous_char;
                if (previous_char == "*") {
                	previous_char = "#";
				}else if (previous_char == "#") {
					previous_char = "*";
				}
            }
        }

        cout << endl;
    }

    return 0;
}