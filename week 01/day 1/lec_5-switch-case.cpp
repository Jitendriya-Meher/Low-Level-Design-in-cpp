#include<iostream>
using namespace std;

int main(){

    int day;
    cout<<" enter the day : ";
    cin>>day;

    // switch case support -> bool, char, int , not floating point values and derived data types
    switch (day)
    {
        case 1:
            cout<<" Monday";
            break;
        case 2:
            cout<<" Tuesday";
            break;
        case 3:
            cout<<" wednessday";
            break;
        case 4:
            cout<<" thursday";
            break;
        case 5:
            cout<<" friday";
            break;
        case 6:
        case 7:
            cout<<" weekend";
            break;
        default:
            cout<<" Not in calendar";
            break;
    }

    return 0;
}