#include<iostream>
using namespace std;

class abc{
    public:
        int x;
        int *y;

        abc(int _x, int _y): x(_x), y(new int(_y)) {
        }

        // default dumb copy constructor
        // it does shallow copy
        // abc( const abc &obj ){
        //     x = obj.x;
        //     y = obj.y;
        // }

        // our smart copy constructor
        // deep copy
        abc( const abc &obj){
            x = obj.x;
            y = new int(*(obj.y));
        }

        void print() const {
            cout<<endl<<" x = "<<x<<endl;
            cout<<" y = "<<y<<endl;
            cout<<" *y = "<<*y<<endl;
        }

        ~abc(){
            delete y;
        }
};

int main(){

    // abc a(1,2);
    // a.print();

    // // copy constructor
    // abc b(a);
    // b.print();

    // abc c = a;
    // c.print();

    // *(b.y)=20;
    // b.print();
    // a.print();

    abc *a = new abc(1,2);
    abc b = *a;
    a->print();
    delete a;
    b.print();

    return 0;
}