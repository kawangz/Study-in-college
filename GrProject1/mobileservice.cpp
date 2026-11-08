#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char package;
    string month;
    int hours;
    double minutes, billA, billB, billC;

    cout << "=====================================" << endl;
    cout << setw(12) << "Package" << setw(12) << "Price" << setw(12) << "Minutes" << setw(12) << "Extra" << endl;
    cout << setw(12) << "A" << setw(12) << 39.99 << setw(12) << 450 << setw(12) << 0.45 << endl;
    cout << setw(12) << "B" << setw(12) << 59.99 << setw(12) << 900 << setw(12) << 0.40 << endl;
    cout << setw(12) << "C" << setw(12) << 69.99 << setw(12) << "Unlimited" << setw(12) << "-" << endl;
    cout << "=====================================" << endl;
    cout << "Enter the month (e.g. January): ";
    cin >> month;
    cout << "Select package A, B or C: ";
    cin >> package;
    cout << "Enter the minutes used: ";
    cin >> minutes;

    //find hours in month
    hours = 0;
    if (month == "January" || month == "March" || month == "May" || month == "July" ||
        month == "August" || month == "October" || month == "December") {
        hours = 744;
    }
    else if (month == "April" || month == "June" || month == "September" || month == "November") {
        hours = 720;
    }
    else if (month == "February") {
        hours = 672;
    }

    //check month input
    if (hours == 0) {
        cout << "Invalid month, try again";
        return 0;
    }

    //check package input
    if ((package != 'A') && (package != 'B') && (package != 'C') &&
        (package != 'a') && (package != 'b') && (package != 'c')) {
        cout << "Invalid package, try again";
        return 0;
    }

    //check minutes input
    if (minutes < 0) {
        cout << "Minutes cannot be negative";
        return 0;
    }
    if (minutes > hours * 60) {
        cout << "Minutes cannot be more than " << hours * 60 << " for " << month;
        return 0;
    }

    //calculate bill of each package
    billA = 39.99;
    if (minutes > 450) {
        billA += (minutes - 450) * 0.45;
    }
    billB = 59.99;
    if (minutes > 900) {
        billB += (minutes - 900) * 0.40;
    }
    billC = 69.99;

    cout << fixed << setprecision(2);

    //show total and savings
    switch (package) {
        case 'A':
        case 'a':
            cout << "Total amount due: $" << billA << endl;
            if (billB < billA) {
                cout << "You would save $" << billA - billB << " with Package B" << endl;
            }
            if (billC < billA) {
                cout << "You would save $" << billA - billC << " with Package C" << endl;
            }
            break;
        case 'B':
        case 'b':
            cout << "Total amount due: $" << billB << endl;
            if (billC < billB) {
                cout << "You would save $" << billB - billC << " with Package C" << endl;
            }
            break;
        case 'C':
        case 'c':
            cout << "Total amount due: $" << billC << endl;
            break;
    }

    return 0;
}