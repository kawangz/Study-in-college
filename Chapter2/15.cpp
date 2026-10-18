#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 4; row++) {
        // print blank spaces
        for (int column = 1; column <= 4 - row; column++) {
            cout << " ";
        }

        // print stars
        for (int star = 1; star <= row * 2 - 1; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}