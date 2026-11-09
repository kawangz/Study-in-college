#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cout << "Enter four numbers a, b, c, d : ";
    cin >> a >> b >> c >> d;

    double max = a;
    max = (max < b) ? b : max;
    max = (max < c) ? c : max;
    max = (max < d) ? d : max;
    
    cout << "The maximum number is: " << max << endl;
    return 0;
}