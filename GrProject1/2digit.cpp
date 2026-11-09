#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int num, a, b;
    cout << "Enter a two-digit number: ";
    cin >> num;
    a = num / 10;
    b = num % 10;
    string char_a, char_b;
    switch(a) {
        case 1:
            char_a = "Mười";
            break;
        case 2:
            char_a = "Hai mươi";
            break;
        case 3:
            char_a = "Ba mươi";
            break;
        case 4:
            char_a = "Bốn mươi";
            break;    
        case 5:
            char_a = "Năm mươi";
            break;
        case 6:
            char_a = "Sáu mươi";
            break;
        case 7:
            char_a = "Bảy mươi";
            break;
        case 8:
            char_a = "Tám mươi";
            break;
        case 9:
            char_a = "Chín mươi";
            break;
    }
    switch (b) {
        case 0:
            char_b = "";
            break;
        case 1:
            char_b = a == 1 ? "Một" : "một";
            break;
        case 3:
            char_b = "ba";
            break;
        case 4:
            char_b = "bốn";
            break;    
        case 5:
            char_b = "lăm";
            break;
        case 6:
            char_b = "sáu";
            break;
        case 7:
            char_b = "bảy";
            break;
        case 8:
            char_b = "tám";
            break;
        case 9:
            char_b = "chín";
            break;
    }
    cout << char_a << " " << char_b << endl;
    return 0;

}