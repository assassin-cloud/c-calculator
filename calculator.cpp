#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    char calc;
    cout << "input first number, a: " << endl;
    cin >> a;

    cout << "input second number, b: " << endl;
    cin >> b;

    cout << "input calculation symbol e.g + - / *: " << endl;
    cin >> calc;
       
    switch (calc) {
        case '+':
        cout << "Solution: " << endl;
        cout << a + b << endl;
        break;

        case '-':
        cout << "Solution: " << endl;
        cout << a - b << endl;
        break;

        case '/':
        cout << "Solution: " << endl;
        cout << a / b << endl;
        break;

        case '*':
        cout << "Solution: " << endl;
        cout << a * b << endl;
        break;

        default:
        cout << "Invalid symbol";
    }
}