#include<iostream>
using namespace std;

int main() {

    int age;
    cout<<" Enter your age: ";
    cin>>age;

    (age > 18) ? cout<<" can vote" : cout<<" cannot vote";
    cout<<endl;

    int x,y;

    cout<< " x = ";
    cin>>x;
    cout<<" y = ";
    cin>>y;

    int result = ( x > y) ? x : y;

    cout<<" largest = "<<result<<endl;

    return 0;
}