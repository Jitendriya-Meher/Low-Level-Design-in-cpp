#include<iostream>
using namespace std;

int main(){

    int a = 5;

    // reference variable 
    int &temp = a;

    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    a++;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    temp++;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    temp*=10;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    a+=100;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    a+=temp;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    temp+=a;
    cout<<"a = "<<a<<"  temp = "<<temp<<endl;

    return 0;

}