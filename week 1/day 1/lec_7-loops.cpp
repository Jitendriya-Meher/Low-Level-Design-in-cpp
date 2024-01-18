#include<iostream>
using namespace std;

int main(){

    // for loop
    for( int i=0; i<10; i++){
        cout<<i<<" jiten"<<endl;
    }

    int i=0;
    for( ; i<10; i++){
        cout<<i<<" "<<endl;
    }

    i = 0;
    for( ; ; i++){
        cout<<i<<" amit"<<endl;
        if( i>10){
            break;
        }
    }

    i = 0;
    for( ; ; ){
        if( i==10){
            i++;
            continue;
        }
        cout<<i<<" amit meher"<<endl;
        if( i>10){
            break;
        }
        i++;
    }

    // while loop
    int j = 0;
    while( j<5){
        cout<<" while loop "<<j<<endl;
        j++;
    }

    return 0;
}