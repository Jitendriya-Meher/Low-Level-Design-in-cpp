#include<iostream>
using namespace std;

#include<cmath>

string DecToBin( int n){
    string ans="";

    while( n>0){
        int dig = n&1;
        n/=2;
        char d = '0'+dig;
        ans = d + ans;
    }

    return ans;
}

int BinToDec( int n){
    int ans=0;
    int i=0;

    while( n>0){
        int dig = n%10;
        n/=10;
        ans += dig*pow(2,i);
        i++;
    }

    return ans;
}

int main(){

    int dec;

    cout<<" enter decimal number : ";
    cin>>dec;

    string decToBin = DecToBin(dec);

    cout<<" equivalent binary number : "<<decToBin<<endl<<endl;

    int bin;

    cout<<" enter binary number : ";
    cin>>bin;

    int binToDec = BinToDec(bin);

    cout<<" equivalent decimal number : "<<binToDec<<endl;

    return 0;
}