#include<iostream>
using namespace std;

// gloabla variable
int x = 2;

void fun(){
    int x = 100;
    cout<<" fun x = "<< x <<endl;
    cout<<" global x = "<< ::x <<endl;
}

int main(){

    cout<<" global x = "<<x<<endl;

    // global x
    x = 10;
    cout<<" global x = "<<x<<endl;

    // local to main function
    int x = 25;
    cout<<" main x = "<<x<<endl;

    // to access global variable
    // with ( :: )
    cout<<" global x = "<< ::x <<endl;
    ::x = 50;
    cout<<" global x = "<< ::x <<endl;

    {
        int x = 80;
        cout<<" loacl x = "<< x <<endl;
        cout<<" global x = "<< ::x <<endl;

        {
            int x = 300;
            cout<<" loacl x = "<< x <<endl;
            cout<<" global x = "<< ::x <<endl; 
        }
    }

    fun();


    return 0;
}