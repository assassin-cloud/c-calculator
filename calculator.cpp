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

double square(){
    double userinput {};
    cout << "Enter number:" << endl;
    cin >> userinput;
    cout << "Solution:" << endl;
    return userinput*userinput;
}

double cube(){
    double userinput {};
    cout << "Enter number:" << endl;
    cin >> userinput;
    cout << "Solution:" << endl;
    return userinput*userinput*userinput;
}

void averageofnumbers(){
    int size {};
    cout << "How many numbers do you want to get the average of:" << endl;
    cin >> size;
    if(size<=0){
        cout << "Invalid Input!" << endl;
    }
    else{
        double *p = new double[size];
        double sum {};
        for(int i=0;i<size;i++){
            cout << "Input " << i+1 << " number:" << endl;
            cin >> p[i];
            sum += p[i];
        }
        cout << "Numbers you Entered: " << endl;
        for(int i=0;i<size;i++){
            cout << p[i] << " ,";
        }
        cout << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum/size << endl;
        delete[] p;
        p = nullptr;
    }
}

int main() {
    double a, b;
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
                addition(a,b);
                goback();
            }

            else if(calc == 4){
                userinput(a,b);
                subtraction(a,b);
                goback();
            }

            else if(calc == 5){
                userinput(a,b);
                if(b == 0) {
        	        cout << "Can't divide by zero" << endl;
        	        cout << endl;
                    goback();
                }
                else{
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
                averageofnumbers();
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
