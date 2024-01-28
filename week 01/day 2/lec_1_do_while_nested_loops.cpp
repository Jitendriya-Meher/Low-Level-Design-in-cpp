#include<iostream>
using namespace std;

int main(){

    // do while loop
    // 1'st iteration doesn't depend on condition
    // exit control statement
    int i=0;
    do{
        cout<<i<<" do while loop"<<endl;
        i++;
    }while( i<5);

    // nested loops
    for( int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            cout<<" i :"<<i<<"  j : "<<j<<endl;
        }
    }

    for( int i=1; i<3; i++){
        for( int j=1; j<3; j++){
            cout<<" i :"<<i<<"  j : "<<j<<" i*j = "<<i*j<<endl;
        }
    }

    for( int i=1; i<=5; i++);
    //  The semicolon terminates the loop statement, turning it into an empty statement. 
    {
        cout<<" i :"<<i;
    }

    cout<<endl<<" i = ";

    if( cin>>i){
        cout<<" cin>>i"<<endl;
    }
    // This code checks whether the extraction from cin into the variable i was successful. The cin >> i expression returns a reference to the cin object, and in a boolean context, it evaluates to true if the extraction was successful and false otherwise.

    if( cout<<i){
        cout<<" cout<<i"<<endl;
    }
    // his code checks whether the insertion into cout was successful. The cout << i expression returns a reference to the cout object, and in a boolean context, it evaluates to true if the insertion was successful and false otherwise. If the insertion is successful.

    return 0;
}