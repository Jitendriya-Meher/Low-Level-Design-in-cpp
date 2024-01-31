#include<iostream>
using namespace std;

class Box{
    int width;
    Box( int _w):width(_w){
    }

    public:

        int getWidth() const{
            return width;
        }

        void setWidth(int _val){
            width = _val;
        }

        friend class BoxFactory;
};

class BoxFactory{
    int count;

    public:
        Box getABox( int _w){
            ++count;
            return Box(_w);
        }
};

int main(){

    // Box a(5);
    // cout<<" width = "<<a.getWidth()<<endl;

    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout<<"width = "<<b.getWidth()<<endl;
    
    return 0;
}