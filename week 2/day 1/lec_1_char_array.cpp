#include<iostream>
using namespace std;

int length( char arr[]){
    int len=0;
    for( int i=0; arr[i] != '\0'; i++){
        len++;
    }
    return len;
}

void concateArray(char a[], char b[]){
    int i = length(a);
    for( int j=0; b[j]!='\0'; j++){
        a[i+j] = b[j];
        a[i+j+1]='\0';
    }
}

int main(){

    // char array
    char arr[10];
    cout << arr[3] << endl;

    char arr2[10] = "amit";
    cout<<arr2[3]<<endl;
    cout<<arr2<<endl;

    cout<<"printing the 4'th char : "<<arr2[4]<<endl;

    int asciiValue = arr2[4];
    cout<<"asciiValue of the 4'th char : "<<asciiValue<<endl;


    // cin.ignore();

    char inp[20];
    cout<<"enter string : ";
    cin>>inp;
    int len1 = length(inp);
    cout<<"len1 = "<<len1<<endl;

    char inp2[20];
    cout<<"enter string : ";
    cin>>inp2;
    int len2 = length(inp2);
    cout<<"len2 = "<<len2<<endl;

    concateArray(inp, inp2);
    cout<<"concate string : "<<inp<<endl;
    int len3 = length(inp);
    cout<<"len3 = "<<len3<<endl; 

    return 0;
}