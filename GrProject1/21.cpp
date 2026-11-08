
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double time, distance;

    cout << "========================================" << endl;
    cout << setw(15) << "Medium" << setw(20) << "Speed (m/s)" << endl;
    cout << "----------------------------------------" << endl;
    cout << 1 << setw(20) << "Carbon Dioxide" << setw(15) << "258.0" << endl;
    cout << 2 << setw(20) << "Air" << setw(15) << "331.5" << endl;
    cout << 3 << setw(20) << "Helium" << setw(15) << "972.0" << endl;
    cout << 4 << setw(20) << "Hydrogen" << setw(15) << "1270.0" << endl;
    cout << "========================================" << endl;

    cout << "Select a medium (1-4): ";
    cin >> choice;

    // check choice input
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice, try again!";
        return 0;
    }

    cout << "Enter the time the sound wave travels (seconds): ";
    cin >> time;

    // check time input
    if (time < 0 || time > 30) {
        cout << "Invalid time! Enter a value between 0 and 30 seconds.";
        return 0;
    }

    // calculate distance
    switch (choice) {
        case 1:
            distance = 258.0 * time;
            break;

        case 2:
            distance = 331.5 * time;
            break;

        case 3:
            distance = 972.0 * time;
            break;

        case 4:
            distance = 1270.0 * time;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "The sound source is " << distance << " meters away.";

    return 0;
}
