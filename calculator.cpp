#include <iostream>
using namespace std;

int calc;

void welcome(int& calc){
    cout << "|==========|" << endl;
    cout << "|CALCULATOR|" << endl;
    cout << "|==========|" << endl;
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
    welcome(calc);
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
    double total {};
    int size;
    double average {};
    while (true) {
        welcome(calc);
        if(cin.fail()){
            cout << "Invalid Input" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{   
            if(calc == 1){
                double *p = new double;
                cout << "Input number: ";
                cin >> *p;
                cout << endl;
                cout << "answer: " << (*p)*(*p) << endl;
                delete p;
                p = nullptr;
                goback();
            }

            else if(calc == 2){
                double *ptr = new double;
                cout << "input number: ";
                cin >> *ptr;
                cout << "answer: " << (*ptr)*(*ptr)*(*ptr) << endl;
                delete ptr;
                ptr = nullptr;
                goback();
            }

            else if(calc == 3) {
                userinput(a,b);
                addition(a,b);
                goback();
            }

            else if(calc == 4){
                userinput(a,b);
                subtraction(a,b);
                goback();
            }

            else if(calc == 5){
                if(b == 0) {
        	        cout << "Can't divide by zero" << endl;
        	        cout << endl;
                    goback();
                }
                else{
                    userinput(a,b);
                    division(a,b);
                    goback();
                }
            }

            else if(calc == 6){
                userinput(a,b);
                Multiplication(a,b);
                goback();
            }

            else if(calc == 7){
                average = 0;
                size = 0;
                total = 0;
                cout << "How many numbers do you want to average" << endl;
                cin >> size;
                double* arrayptr = new double[size];
                for(int i{};i<size;i++){
                    cout << "Type " << i+1 << " number" << endl;
                    cin >> arrayptr[i];
                }
                for(int i{};i<size;i++){
                    total += arrayptr[i];
                }
                cout << "Sum of the numbers: " << total << endl;
                average = total/size;
                cout << endl;
                cout << "Average: " << average;
                delete [] arrayptr;
                arrayptr = nullptr;
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
