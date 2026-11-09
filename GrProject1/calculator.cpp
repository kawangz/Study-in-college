#include <iostream>
using namespace std;

int main() {
    int a,b; 
    cout << "Enter two number a and b: ";
    cin >> a >> b;
    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            } 

    }
    return 0;
}