#include<iostream>
using namespace std;

int main(){

    int budget;

    cout<<" Enter your budget : ";
    cin>>budget;

    // if block
    if( budget > 100000){
        cout<<" you can buy nano"<<endl;
    }

    // if-else block
    if( budget > 1000){
        cout<<" Greater than 1000";
    }
    else{
        cout<<" less than 1000 or equal";
    }
    cout<<endl;

    // if-else-if / if-else if-else block
    if( budget > 1000){
        cout<<" budget is greater than 1000";
    }
    else if( budget > 100){
        cout<<" budget is greater than 100";
    }
    else if( budget > 10){
        cout<<" budget is greater than 10";
    }
    else{
        cout<<" budget is less than 10 or equal";
    }
    cout<<endl;

    // nested ifs
    if( budget < 100){
        cout<<" budget is less than 100"<<endl;

        if( budget < 10){
            cout<<" also budget is less than 10"<<endl;
        }
    }
    else{
        cout<<" budget is not less than 1000"<<endl;
    }

    return 0;
}