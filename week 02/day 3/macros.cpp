#include<iostream>
using namespace std; 

// macros
// work at the time of pre processing
#define PI 3.1416
#define MAXX(x,y) ( x>y ? x : y )


float circleArea( float r){
    return PI * r * r;
}

int main(){

    float area = circleArea(65.2);
    cout<<" area = "<<area<<endl;

    float mx1 = MAXX(10.34, 10.22);
    cout<<" mx1 = "<<mx1<<endl;

    int mx2 = MAXX(10,11);
    cout<<" mx2 = "<<mx2<<endl;

    return 0;
}