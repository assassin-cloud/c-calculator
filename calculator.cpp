#include <iostream>
using namespace std;

void welcome(string name){
    cout << "|==========|" << endl;
    cout << "|CALCULATOR|" << endl;
    cout << "|==========|" << endl;
    cout << endl;
    cout << "WELCOME " << name << endl;
    cout << endl;
    cout << "1. Multiplication" << endl;
    cout << "2. Division" << endl;
    cout << "3. Addition" << endl;
    cout << "4. Subtraction" << endl;
    cout << "5. Square root" << endl;
    cout << "6. Cube root" << endl;
    cout << endl;
    cout << "Type the number of the function you want:" << endl;
}

void Multiplication(double x, double y){
    cout << "Solution:" << endl;
    cout << x*y << endl;
}

void division(double x, double y){
    cout << "Solution:" << endl;
    cout << x/y << endl;
}

void addition(double x, double y){
    cout << "Solution:" << endl;
    cout << x+y << endl;
}

void subtraction(double x, double y){
    cout << "Solution:" << endl;
    cout << x-y << endl;
}

int main() {
    double a, b;
    string user, pass, end;
    double calc;

    cout << "Input username: " << endl;
    cin >> user;

    if(user == "admin" || user == "ADMIN") {
       cout << "input password: " << endl;
       cin >> pass;

       if(pass == "root" || pass == "ROOT") {
        end = "y";

    while (end == "y") {
        welcome(user);

    cin >> calc;
    if(calc == 5){
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

    else if(calc == 6){
        double *ptr = new double;
        cout << "input number: ";
        cin >> *ptr;
        cout << "answer: " << (*ptr)*(*ptr)*(*ptr) << endl;
        delete ptr;
        ptr = nullptr;
        cout << "To continue type 'y'or 'q' to exit:" << endl;
        cin >> end;
    }

    else if(calc == 1 || calc == 2 || calc == 3 || calc == 4){

    cout << "input first number, a: " << endl;
    cin >> a;

    cout << "input second number, b: " << endl;
    cin >> b;
       
    if(calc == 3) {
        addition(a,b);
    }

    else if(calc == 4){
        subtraction(a,b);
    }

    else if(calc == 2){
        if(b == 0) {
        	cout << "Can't divide by zero" << endl;
        	break;
        }
        else{
        division(a,b);
        }
    }

    else if(calc == 1){
        Multiplication(a,b);
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
