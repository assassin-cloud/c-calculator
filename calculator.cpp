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

double Multiplication(double x, double y){
    cout << "Solution:" << endl;
    return x*y;
}

double division(double x, double y){
    cout << "Solution:" << endl;
    return x/y;
}

double addition(double x, double y){
    cout << "Solution:" << endl;
    return x+y;
}

double subtraction(double x, double y){
    cout << "Solution:" << endl;
    return x-y;
}

double square(){
    cout << "Enter number:" << endl;
    double userinput {};
    cin >> userinput;
    cout << "Solution:" << endl;
    return userinput*userinput;
}

double cube(){
    cout << "Enter number:" << endl;
    double userinput {};
    cin >> userinput;
    cout << "Solution:" << endl;
    return userinput*userinput*userinput;
}

double averageofnumbers(){
    cout << "How many numbers do you want to get the average of:" << endl;
    int size {};
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
        delete[] p;
        p = nullptr;
        cout << "Sum:" << endl;
        return sum;
        cout << "Average:" << endl;
        return sum/size;
    }
}

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
