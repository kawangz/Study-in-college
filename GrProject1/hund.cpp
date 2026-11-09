#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer number: ";
    cin >> num;

    if (num < 100) {
        cout << 0;
    } else {
        int hundred = abs(num / 100) % 10;
        cout << hundred;
    }
    return 0;
}