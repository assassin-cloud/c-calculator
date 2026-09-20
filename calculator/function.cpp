#include <iostream>
using namespace std;

void welcome(int& calc){
    cout << "=================" << endl;
    cout << "   CALCULATOR    " << endl;
    cout << "=================" << endl;
    cout << endl;
    cout << "1. Square" << endl;
    cout << "2. Cube" << endl;
    cout << "3. Addition" << endl;
    cout << "4. Subtraction" << endl;
    cout << "5. Division" << endl;
    cout << "6. Multiplication" << endl;
    cout << "7. Average" << endl;
    cout << "8. Exit" << endl;
    cout << endl;
    cout << "Type the number of the function you want:" << endl;
    cin >> calc;
}

void userinput(double& a, double& b){
    cout << "input first number, a: " << endl;
    cin >> a;
    cout << "input second number, b: " << endl;
    cin >> b;
}

void goback(){
    cout << endl;
    string i;
    cout << "Type anything to back: " << endl;
    cin >> i;
}
