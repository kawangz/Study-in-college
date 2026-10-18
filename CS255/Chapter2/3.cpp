#include <iostream>
using namespace std;

int main() {
    double state_tax = 0.02, country_tax = 0.04;
    double purchase = 95;
    double total_tax = purchase * (state_tax + country_tax);
    
    cout<< "Total sales tax is: $" << total_tax <<endl;

    return 0;
}