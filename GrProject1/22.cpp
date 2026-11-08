#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temp;

    cout << "=====================================" << endl;
    cout << setw(15) << "Substance" << setw(15) << "Freeze(F)" << setw(15) << "Boil(F)" << endl;
    cout << setw(15) << "Ethyl alcohol" << setw(15) << -173 << setw(15) << 172 << endl;
    cout << setw(15) << "Mercury" << setw(15) << -38 << setw(15) << 676 << endl;
    cout << setw(15) << "Oxygen" << setw(15) << -362 << setw(15) << -306 << endl;
    cout << setw(15) << "Water" << setw(15) << 32 << setw(15) << 212 << endl;
    cout << "=====================================" << endl;
    cout << "Enter a temperature(F): ";
    cin >> temp;

    //check freezing points
    cout << "\nWill freeze at " << temp << " F:" << endl;
    if (temp <= -173) {
        cout << "- Ethyl alcohol" << endl;
    }
    if (temp <= -38) {
        cout << "- Mercury" << endl;
    }
    if (temp <= -362) {
        cout << "- Oxygen" << endl;
    }
    if (temp <= 32) {
        cout << "- Water" << endl;
    }
    else {
        cout << "None" << endl;
    }

    //check boiling points
    cout << "\nWill boil at " << temp << " F:" << endl;
    if (temp >= 172) {
        cout << "- Ethyl alcohol" << endl;
    }
    if (temp >= 676) {
        cout << "- Mercury" << endl;
    }
    if (temp >= -306) {
        cout << "- Oxygen" << endl;
    }
    if (temp >= 212) {
        cout << "- Water" << endl;
    }
    else {
        cout << "None" << endl;
    }
    return 0;
}