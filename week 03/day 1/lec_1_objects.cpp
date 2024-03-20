#include<iostream>
using namespace std;

class Student{
    
    // attributes
    public:
        int id;
        int age;
        string name;
        int nos;
        float *gpa;

    // constructors / ctor

    // default constructor
    Student(){
        cout<<"Student Default constructor called"<<endl;
    }

    // parameterised constructor
    Student( int id, int age, string name, int nos, float gpa){
        cout<<"Student Parameterised constructor called"<<endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->gpa = new float(gpa);
    }

    // copy constructor
    Student( const Student &srcObj){
        cout<<"Student Copy constructor called"<<endl;
        this->id = srcObj.id;
        this->name = srcObj.name;
        this->age = srcObj.age;
        this->nos = srcObj.nos;
        this->gpa = new float(*(srcObj.gpa));
    }

    // behaviour/methods/function
    void study(){
        cout<<this->name<<" is Studying "<<endl;
    }

    void sleep(){
        cout<<this->name<<" is Sleeping "<<endl;
    }

    void bunk(){
        cout<<this->name<<" is Bunking "<<endl;
    }

    // destructor / dtor
    ~Student(){
        cout<<"Student destructor is called"<<endl;
        delete this->gpa;
    }
};

int main(){

    // static allocation
    Student A;
    A.id = 1;
    A.age = 15;
    A.name = "Ran Pratab";
    A.nos = 6;
    A.gpa = new float(3.4);

    A.study();
    A.sleep();
    A.bunk();
    cout<<A.name<<" "<<A.age<<" "<<*(A.gpa)<<endl;

    Student B(21,20,"Jitendriya Meher",12,8.5);
    B.study();
    cout<<B.name<<" "<<B.age<<" "<<*(B.gpa)<<endl;

    Student C = A;
    C.study();
    cout<<C.name<<" "<<C.age<<" "<<*(C.gpa)<<endl;

    Student D(B);
    D.study();
    cout<<D.name<<" "<<D.age<<" "<<*(D.gpa)<<endl;

    // dynamic allocation or student pointer
    Student *Ap = new Student(1,12,"Amit Meher",112,9.8);
    Ap->study();
    cout<<Ap->name<<" "<<Ap->age<<" "<<*(Ap->gpa)<<endl;

    delete Ap;

    return 0;
}