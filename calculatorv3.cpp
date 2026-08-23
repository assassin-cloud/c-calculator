#include <iostream>
using namespace std;

int main() {
    double a, b;
    string user, pass;
    char calc, end;

    cout << "Input username: " << endl;
    cin >> user;
    if(user == "admin" || user == "ADMIN") {
       cout << "input password: " << endl;
       cin >> pass;

       if(pass == "root" || pass == "ROOT") {
        cout << "To continue type 'y'" << endl;
        cin >> end;
    
    while (end == 'y') {
    
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
        if(b == 0) {
        	cout << "Can't divide by zero" << endl;
        	break;
        }
        else{
        cout << "Solution: " << endl;
        cout << a << '/' << b << '=' << a / b << endl;
        cout << a/b << endl;
        }
        break;

        case '*':
        cout << "Solution: " << endl;
        cout << a << '*' << b << '=' << a * b << endl;
        cout << a*b << endl;
        break;

        default:
        cout << "Invalid symbol";
    }
    cout << "type q to quit or type y to continue" << endl;
    cin >> end;
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
