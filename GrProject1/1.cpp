#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int min_hours = 5;
    double pay_rate = 50.0 ;
    double hours ;
    hours = hours < min_hours ? min_hours : hours;
    cout << fixed << setprecision(2);
    cout <<"The charge is: $" << pay_rate * hours << endl;
    return 0;
}