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
    if(user == "Farhan" || user == "farhan") {
       cout << "input password: " << endl;
       cin >> pass;

       if(pass == "farhan123" || pass == "Farhan123" || pass == "Farhan14" || pass == "farhan14") {
    
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
    else {
        cout << "Invalid username";
    }
}