#include<iostream>
using namespace std;

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