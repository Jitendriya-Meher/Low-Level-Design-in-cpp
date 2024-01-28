
#include<iostream>
using namespace std;

int main(){

    // variable define
    int age = 25;
    cout<<" Age: "<<age<<endl;

    // declaration
    int num;  // store garbage values
    cout<<" Num : "<<num<<endl;

    // definition
    int num2 = 20;
    cout<<" Num2 : "<<num2<<endl;

    // manipulation or updation
    num2 = 101;
    cout<<" Num2 : "<<num2<<endl;

    // data types
    int number = 2123;
    cout<<" number : "<<number<<endl;
    cout<<" size of integer : "<<sizeof(int)<<endl;

    float pi = 3.141659;
    cout<<" pi : "<<pi<<endl;
    cout<<" size of float : "<<sizeof(float)<<endl;

    char alphabet = 'z';
    cout<<" alphabet : "<<alphabet<<endl;
    cout<<" size of char : "<<sizeof(char)<<endl;

    bool isMale = false;
    cout<<" isMale : "<<isMale<<endl;
    isMale = 1;
    cout<<" isMale : "<<isMale<<endl;
    cout<<" size of boolean : "<<sizeof(bool)<<endl;

    double weight = 56.292688;
    cout<<" weight : "<<weight<<endl;
    cout<<" size of double : "<<sizeof(double)<<endl;

    {
        // redefination
        double weight = 212.121;
        cout<<" weight : "<<weight<<endl;
    }

    return 0;
}