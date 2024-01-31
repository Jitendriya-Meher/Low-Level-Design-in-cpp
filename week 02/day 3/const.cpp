#include<iostream>
using namespace std;

class abc{
    int x;
    // mutable int x;
    int *y;

    public:
        abc(){
            x = 0;
            y = new int(0);
        }

        // old style
        // abc(int _x, int _y){
        //     x = _x;
        //     y = new int(_y);
        // }

        // initialization list
        abc( int _x, int _y):x(_x),y(new int(_y)) { 
            cout<<"initialization list"<<endl;
        }

        int getX() const{
            // x = 50;

            // if x is mutable
            // x = 50;

            return x;
        }

        void setX(int _val){
            x = _val;
        }

        int getY() const{
            // *y = 20;
            return *y;
        }

        void setY(int _val){
            *y = _val;
        }
};

void print( const abc &a){
    cout<<" x = "<<a.getX()<<" , y = "<<a.getY()<<endl;
}

int main(){

    abc a;
    print(a);

    abc b(10,20);
    print(b);

    return 0;
}

int main2(){

    const int x=5;
    cout <<" x = "<< x << endl;
    // initialization can be done
    // but we cannot reassign a value

    // x = 20;
    cout <<" x = "<< x << endl;
    
    // int *p = &x;
    // *p = 20;
    // cout <<" x = "<< x << endl;
    // works on older compilers

    // const int y;
    // y = 101;
    const int y = 101;
    cout <<" y = "<< y << endl;


    // const with pointers

    int *a = new int;
    *a = 2;
    cout<<" *a = "<< *a << endl;
    delete a;
    int b = 5;
    a = &b;
    cout<<" *a = "<< *a << endl<<endl; 


    // CONST DATA, NON CONST POINTER
    // const int *c = new int(1);
    int const *c = new int(1);
    cout<<" *c = "<< *c << endl;
    // *c = 2;
    // cout<<" *c = "<< *c << endl;
    // cannot change the content of the pointer
    int d = 5;
    c = &d;
    // but pointer itseif can be changed
    cout<<" *c = "<< *c << endl<<endl;


    // CONST POINTER, NON CONST DATA
    int *const e = new int(1);
    cout<<" *e = "<< *e << endl;
    *e = 2;
    cout<<" *e = "<< *e << endl;
    // can change the content of the pointer
    // int f = 5;
    // e = &f;
    // but pointer itseif cannot be changed
    cout<<" *e = "<< *e << endl<<endl;


    // CONST DATA, CONST POINTER
    const int *const g = new int(1);
    cout<<" *g = "<< *g << endl;
    // *g = 2;
    // cout<<" *g = "<< *g << endl;
    // cannot change the content of the pointer
    // int h = 5;
    // g = &h;
    // also pointer itseif cannot be changed
    cout<<" *g = "<< *g << endl;

    return 0;
}