#include <iostream>
using namespace std;

int main() {
    double a, b;
    string user, pass;
    string calc, end;

    cout << "Input username: " << endl;
    cin >> user;
    if(user == "admin" || user == "ADMIN") {
       cout << "input password: " << endl;
       cin >> pass;

       if(pass == "root" || pass == "ROOT") {
        cout << "To continue type 'y'or 'q' to exit:" << endl;
        cin >> end;
    
    while (end == "y") {

        
    cout << "input calculation symbol e.g + - / * or s for square root and c for cube root: " << endl;
    cin >> calc;
    if(calc == "s"){
        double *p = new double;
        cout << "Input number: ";
        cin >> *p;
        cout << endl;
        cout << "answer: " << (*p)*(*p) << endl;
        delete p;
        p = nullptr;
        cout << "To continue type 'y'or 'q' to exit:" << endl;
        cin >> end;
    }
    else if(calc == "c"){
        double *ptr = new double;
        cout << "input number: ";
        cin >> *ptr;
        cout << "answer: " << (*ptr)*(*ptr)*(*ptr) << endl;
        delete ptr;
        ptr = nullptr;
        cout << "To continue type 'y'or 'q' to exit:" << endl;
        cin >> end;
    }
    else if(calc == "+" || calc == "-" || calc == "/" || calc == "*"){

    cout << "input first number, a: " << endl;
    cin >> a;

    cout << "input second number, b: " << endl;
    cin >> b;
       
    if(calc == "+") {
        cout << "Solution: " << endl;
        cout << a+b << endl;
    }

    else if(calc == "-"){
        cout << "Solution: " << endl;
        cout << a-b << endl;
    }

    else if(calc == "/"){
        if(b == 0) {
        	cout << "Can't divide by zero" << endl;
        	break;
        }
        else{
        cout << "Solution: " << endl;
        cout << a/b << endl;
        }
    }

    else if(calc == "*"){
        cout << "Solution: " << endl;
        cout << a*b << endl;
    }
    cout << "type q to quit or type y to continue" << endl;
    cin >> end;
    }
    else{
        cout << "Invalid Input" << endl;
    }
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
