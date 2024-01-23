#include<iostream>
using namespace std;

int main(){

    // uniary operator

    // (pre / post) operations
    int i=5;
    
    cout<<(i++)<<endl;
    cout<<(i)<<endl;

    cout<<(++i)<<endl;
    cout<<(i)<<endl<<endl;

    cout<<(i--)<<endl;
    cout<<(i)<<endl;

    cout<<(--i)<<endl;
    cout<<(i)<<endl<<endl;

    // binary operator

    // arithmetic operators
    int a=123,b=6;
    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;
    cout<<(a%b)<<endl<<endl;

    // relational operators
    cout<<(a>b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a!=b)<<endl<<endl;

    // logical operators
    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if( cond1 && cond2 && cond3 ){
        cout<<" all conditions are true"<<endl;
    }

    if( cond1 || cond2 || cond3 ){
        cout<<" atleast one condition is true"<<endl;
    }

    if( !cond3){
        cout<<" this condition is false"<<endl;
    }

    // assignments operators
    int arr = 5;
    cout<<" arr = "<<arr<<endl;
    arr+=5;
    cout<<" arr = "<<arr<<endl;
    arr-=5;
    cout<<" arr = "<<arr<<endl;
    arr*=10;
    cout<<" arr = "<<arr<<endl;
    arr/=10;
    cout<<" arr = "<<arr<<endl;
    arr%=3;
    cout<<" arr = "<<arr<<endl<<endl;

    // bitwise operators
    cout<<( 6&3)<<endl;
    cout<<( 6|3)<<endl;
    cout<<( 6^3)<<endl;
    cout<<( 6>>1)<<endl;
    cout<<( 6<<1)<<endl;
    cout<<( ~10)<<endl;

    return 0; 
}