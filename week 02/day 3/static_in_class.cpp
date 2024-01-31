#include<iostream>
using namespace std;

class abc{

    public:
        static int x,y;

        static void print(){
            // static function allows only static variables
            // no this pointer accessiable
            cout<<" x = "<< x<<" , y = "<< y<<endl;
        }
};

// static members access outside
int abc::x;
int abc::y;

int main(){

    // abc obj1 = {1,2};
    // abc obj2 = {5,6};

    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();

    abc obj2;
    obj2.x = 5;
    obj2.y = 6;
    obj1.print();
    obj2.print();

    abc::x = 100;
    abc::y = 200;
    abc::print();
    obj1.print();
    obj2.print();

    return 0;
}