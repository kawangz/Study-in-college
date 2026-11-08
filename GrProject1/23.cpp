#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;
    const double PI = 3.14159;

    cout << "=====================================" << endl;
    cout << setw(25) << "Geometry Calculator" << endl;
    cout << "=====================================" << endl;
    cout << 1 << setw(5) << "." << " Calculate the Area of a Circle" << endl;
    cout << 2 << setw(5) << "." << " Calculate the Area of a Rectangle" << endl;
    cout << 3 << setw(5) << "." << " Calculate the Area of a Triangle" << endl;
    cout << 4 << setw(5) << "." << " Quit" << endl;
    cout << "=====================================" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    //check choice input
    if ((1 > choice) || (4 < choice)) {
        cout << "Invalid choice, try again";
        return 0;
    }

    //calculate area
    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0) {
                cout << "Radius cannot be negative";
                return 0;
            }
            area = PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        case 2:
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if ((length < 0) || (width < 0)) {
                cout << "Length and width cannot be negative";
                return 0;
            }
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        case 3:
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if ((base < 0) || (height < 0)) {
                cout << "Base and height cannot be negative";
                return 0;
            }
            area = base * height * 0.5;
            cout << "Area of the triangle: " << area << endl;
            break;
        case 4:
            cout << "Goodbye!" << endl;
            break;
    }

    return 0;
}