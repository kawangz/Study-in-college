#include <iostream>
using namespace std;

int main() {
    double item1 = 15.95, item2 = 24.95, item3 = 6.95,
item4 = 12.95, item5 = 3.95;
    double sub_total = item1 + item2 + item3 + item4 + item5;
    double tax = 0.07;
    double tax_ammount = sub_total * 0.07;
    double total = sub_total + tax_ammount;


    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;

    cout << "\nSubtotal: $" << sub_total << endl;
    cout << "Sales Tax: $" << tax_ammount << endl;
    cout << "Total: $" << total << endl;
}