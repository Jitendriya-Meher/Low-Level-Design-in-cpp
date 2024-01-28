#include<iostream>
using namespace std;

void printArray( int arr[], int n){
    int sum=0;
    for( int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout<<"  sum = "<<sum<<endl;
}

void print2D( int arr[][4], int row, int col){
    for( int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){

    // array 

    //declaration
    int arr[10];

    // initialization
    int arr2[5] = {10,20,30,40,50};
    int arr3[] = {10,20,30,40,50};

    printArray(arr,10);
    printArray(arr2,5);
    printArray(arr3,5);

    // access arrays elements
    int mulOf2[10];
    for( int i=0; i<10; i++){
        mulOf2[i] = 2*(i+1);
    }

    printArray(mulOf2,10);

    // input in an array 
    int inpArr[5];
    for( int i=0; i<5; i++){
        cout<<"inpArr["<<i<<"]"<<" = ";
        cin>>inpArr[i];
    }

    printArray(inpArr,5);

    // 2d array

    // declaration
    int arr4[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    print2D(arr4,2,4);

    return 0;
}