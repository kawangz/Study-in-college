#include <iostream>
using namespace std;

int main()
{
    double gasTankCapacity = 20;
    double cityMpg = 23.5;
    double highwayMpg = 28.9;

    double cityDistance = gasTankCapacity * cityMpg;
    double highwayDistance = gasTankCapacity * highwayMpg;

    cout << "Distance in town: " << cityDistance << " miles" << endl;
    cout << "Distance on highway: " << highwayDistance << " miles" << endl;

    return 0;
}