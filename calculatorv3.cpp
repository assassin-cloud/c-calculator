#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    string user;
    string pass;
    char calc;

    cout << "Input username: " << endl;
    cin >> user;

    cout << "input password: " << endl;
    cin >> pass;

    if(user == "admin" && pass == "root") {

    cout << "input first number, a: " << endl;
    cin >> a;

    cout << "input second number, b: " << endl;
    cin >> b;

    cout << "input calculation symbol e.g + - / *: " << endl;
    cin >> calc;
       
    switch (calc) {
        case '+':
        cout << "Solution: " << endl;
        cout << a << '+' << b << '=' << a + b << endl;
        cout << a+b << endl;
        break;

        case '-':
        cout << "Solution: " << endl;
        cout << a << '-' << b << '=' << a - b << endl;
        cout << a-b << endl;
        break;

        case '/':
        cout << "Solution: " << endl;
        cout << a << '/' << b << '=' << a / b << endl;
        cout << a/b << endl;
        break;

        case '*':
        cout << "Solution: " << endl;
        cout << a << '*' << b << '=' << a * b << endl;
        cout << a*b << endl;
        break;

        default:
        cout << "Invalid symbol";
    }
       }
       else {
        cout << "Invalid password";
       }
}