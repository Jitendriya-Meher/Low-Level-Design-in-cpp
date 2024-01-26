#include<iostream>
using namespace std;

// pass by value 
void solve( int a){
    cout<<"inside solve a = "<<a<<endl;
    a++;
    cout<<"inside solve a = "<<a<<endl;
}

// pass by reference 
void ref( int &a){
    cout<<"inside ref a = "<<a<<endl;
    a++;
    cout<<"inside ref a = "<<a<<endl;
}

int main(){

    int a = 5;  // int , char, string
    cout<<"inside main a = "<<a<<endl;
    solve(a);
    cout<<"inside main a = "<<a<<endl;

    ref(a);
    cout<<"inside main a = "<<a<<endl;
    
    return 0;
}