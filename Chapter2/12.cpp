#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double SQUARE_FEET_PER_ACRE = 43560;
    double landArea = 391876;

    double acres = landArea / SQUARE_FEET_PER_ACRE;

    cout << "Number of acres: " << acres << endl;

    return 0;
}