#include<iostream>
using namespace std;

int main(){

    int num = 50;
    cout<<" address of num : "<<&num<<endl;

    int *p;
    cout<<" value of p : "<<p<<endl;

    p = nullptr;
    p = 0;
    p = NULL;
    cout<<" value of p : "<<p<<endl;

    p = &num;
    cout<<" value of p : "<<p<<endl;

    cout<<" value of &p : "<<&p<<endl;
    cout<<" value of *p : "<<*p<<endl;

    (*p)++;
    cout<<" num = "<<num<<endl;

    // dynamic memory allocation
    int *ptr = new int;
    cout<<" ptr = "<<ptr<<endl;
    cout<<" *ptr = "<<*ptr<<endl;

    *ptr = 121;
    cout<<" *ptr = "<<*ptr<<endl;

    // free dynamic memory
    delete ptr;

    // dynamic memory allocation of array
    int *arr = new int[5];

    cout<<" array = ";
    for( int i = 0; i < 5; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    cout<<" arr = "<<arr<<endl;
    cout<<" *arr = "<<*arr<<endl;

    arr++;
    cout<<" arr = "<<arr<<endl;
    cout<<" *arr = "<<*arr<<endl;

    arr++;
    cout<<" arr = "<<arr<<endl;
    cout<<" *arr = "<<*arr<<endl;

    arr++;
    cout<<" arr = "<<arr<<endl;
    cout<<" *arr = "<<*arr<<endl;


    return 0;
}