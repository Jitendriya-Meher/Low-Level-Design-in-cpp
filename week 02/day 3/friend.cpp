#include<iostream>
using namespace std;

class A{
    private:
        int x;
    
    public:
        A(int _x) : x(_x){};

        int getX() const{
            return x;
        }

        void setX(int _value) {
            x = _value;
        }

        friend class B;
        friend void print( const A &a);
};

class B{
    public:
        void print( const A &a){
            cout<<" class a.x = ";
            // cout << a.getX() <<endl;
            cout<<a.x<<endl;
        }
};

void print( const A &a){
    cout<<" fun a.x = ";
    cout<<a.x<<endl;
}

int main(){

    A a(50);
    B b;
    b.print(a);

    print(a);

    return 0;
}