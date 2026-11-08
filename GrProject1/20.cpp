#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double distance, time;
    cout << "======================================" << endl;
    cout << setw(15) << "Medium" << setw(15) << "Speed" << endl;
    cout << 1 << setw(15) << "Air" << setw(20) << "1100 ft/s" << endl;
    cout << 2 << setw(15) << "Water" << setw(20) << "4900 ft/s" << endl;
    cout << 3 << setw(15) << "Steel"<< setw(20) << "16400 ft/s" << endl;
    cout << "======================================" << endl;
    cout << "Select Air(1), Water(2) or Steel(3): ";
    cin >> choice;
    
    //check choice input
    if ((1 > choice) || (3 < choice)) {
        cout << "Invalid choice, try again";
        return 0;
    }
    cout <<"Enter a distance a sound wave will travel(ft): ";
    cin >> distance;



    //caculate time
    switch (choice){
        case 1:
            time = distance / 1100;
            break;
        case 2:
            time = distance / 4900;
            break;
        case 3:
            time = distance / 16400;
            break;
         }
    cout << fixed << setprecision(4);
    cout << "It will takes: " << time << " Second";


    return 0;
}