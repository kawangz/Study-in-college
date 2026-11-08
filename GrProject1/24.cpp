#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double startTime, minutes;
    double rate;
    int hour, minute, totalMinutes;

    cout << "=====================================" << endl;
    cout << setw(20) << "Starting Time" << setw(20) << "Rate per Minute" << endl;
    cout << setw(20) << "00:00 - 06:59" << setw(20) << 0.05 << endl;
    cout << setw(20) << "07:00 - 19:00" << setw(20) << 0.45 << endl;
    cout << setw(20) << "19:01 - 23:59" << setw(20) << 0.20 << endl;
    cout << "=====================================" << endl;
    cout << "Enter the starting time (HH.MM): ";
    cin >> startTime;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    //split time into hour and minute
    hour = static_cast<int>(startTime);
    minute = round((startTime - hour) * 100);

    //check time input
    if ((startTime < 0) || (hour > 23)) {
        cout << "Invalid time, try again";
        return 0;
    }
    if (minute > 59) {
        cout << "Invalid time, minutes must be 59 or less";
        return 0;
    }

    //check minutes input
    if (minutes < 0) {
        cout << "Minutes cannot be negative";
        return 0;
    }

    //find the rate
    totalMinutes = hour * 60 + minute;
    if (totalMinutes < 7 * 60) {
        rate = 0.05;
    }
    else if (totalMinutes <= 19 * 60) {
        rate = 0.45;
    }
    else {
        rate = 0.20;
    }

    cout << fixed << setprecision(2);
    cout << "Charge: $" << minutes * rate << endl;

    return 0;
}