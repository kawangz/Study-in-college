#include <iostream>
using namespace std;

int main(){
    double meal_charge = 88.67, tax_rate = 0.0675, tip_rate = 0.2;
    double tax = meal_charge * tax_rate;
    double meal_taxed = meal_charge + tax;
    double tip = meal_taxed * tip_rate;
    double total_bill = meal_taxed + tip;

    cout << "The meal cost is: $" << meal_charge <<endl;
    cout << "The tax amount is: $" << tax <<endl;
    cout << "The tip amount is: $" << tip <<endl;
    cout << "Total bill is: $" << total_bill <<endl;

    return 0;

}