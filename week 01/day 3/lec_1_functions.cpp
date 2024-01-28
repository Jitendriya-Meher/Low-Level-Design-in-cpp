#include<iostream>
using namespace std;

// function declaration
int sumUptoN( int n);

// function definition
// input parameters
void printUptoN( int n){
    cout<<" count : ";
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    // function call
    // input arguments
    printUptoN(5);
    printUptoN(10);
    printUptoN(20);

    int n;
    cout<<" enter a number : ";
    cin>>n;

    printUptoN(n);
    
    int sum = sumUptoN(n);
    cout<<" sum = "<<sum<<endl<<endl;

    return 0;
}

int sumUptoN( int n){
    int sum =0;
    for( int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}