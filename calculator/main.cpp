#include "functiondecl.h"
#include <iostream>
using namespace std;

int main() {
    double a {}, b {};
    int calc {};
    while (true) {
        welcome(calc);
        if(cin.fail()){
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{   
            if(calc == 1){
                cout << square() << endl;
                goback();
            }

            else if(calc == 2){
                cout << cube() << endl;
                goback();
            }

            else if(calc == 3) {
                userinput(a,b);
                cout << addition(a,b) << endl;
                goback();
            }

            else if(calc == 4){
                userinput(a,b);
                cout << subtraction(a,b) << endl;
                goback();
            }

            else if(calc == 5){
                userinput(a,b);
                if(b == 0) {
        	        cout << "Can't divide by zero" << endl;
                    goback();
                }
                else{
                    cout << division(a,b) << endl;
                    goback();
                }
            }

            else if(calc == 6){
                userinput(a,b);
                cout << Multiplication(a,b) << endl;
                goback();
            }

            else if(calc == 7){
                cout << averageofnumbers() << endl;
                goback();
            }

            else if(calc == 8){
                break;
            }

            else{
                cout << "Invalid Input!" << endl;
                goback();
            }
        }
    }
}
