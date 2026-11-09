#include <iostream>
#include <string>
using namespace std;

int main() {
    int day, month;
    cout << "Enter a day (1-31) and month (1-12) of 2026: ";
    if (!(cin >> day >> month)) {
        cerr << "Please enter numeric values for the day and month.\n";
        return 1;
    }

    const int daysInMonth[] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
    const string weekdays[] = {"Thursday", "Friday", "Saturday",
                               "Sunday", "Monday", "Tuesday", "Wednesday"};

    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month - 1]) {
        cerr << "Invalid date for 2026.\n";
        return 1;
    }

    int daysBeforeDate = day - 1;
    for (int i = 0; i < month - 1; ++i) {
        daysBeforeDate += daysInMonth[i];
    }

    const string& dayOfWeek = weekdays[daysBeforeDate % 7];
    cout << "The day of the week for " << day << "/" << month
         << "/2026 is: " << dayOfWeek << '\n';
    return 0;
}