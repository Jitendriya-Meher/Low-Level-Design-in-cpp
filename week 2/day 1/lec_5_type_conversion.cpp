#include<iostream>
using namespace std;

int main(){

    // implicit type casting
    int n1 = 10;
    float n2 = 20.5;
    float ans1 = n1+n2;
    cout<<ans1<<endl;

    char ch = 'A';
    int n3 = ch + 1;
    cout<<n3<<endl;

    int a = 97;
    char ch2 = a + 3;
    cout<<ch2<<endl;

    // explicit type casting
    float ans2 = n1 + (int)n2;  // casting operator
    cout<<ans2<<endl;

    double pi = 3.14159265;
    int intpi = (int)pi;
    cout<<intpi<<endl;

    float f = 65.35;
    char fc = (char)f;
    cout<<fc<<endl;

    int ai = 10;
    int bi = 3;
    float ci = (float)ai/bi;
    cout<<ci<<endl;

    return 0;
}