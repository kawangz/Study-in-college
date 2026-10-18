#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cost = 14.95;
    double profitRate = 0.35;

    double sellingPrice = cost * (1 + profitRate);

    cout << "Selling Price: $" << sellingPrice << endl;

    return 0;
}