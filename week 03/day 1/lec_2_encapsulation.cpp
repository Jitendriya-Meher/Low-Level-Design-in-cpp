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

    private:
        string gf;

    public:
    // constructors / ctor
    // default constructor
    Student(){
        cout<<"Student Default constructor called"<<endl;
    }

    // parameterised constructor
    Student( int id, int age, string name, int nos, float gpa, string gf){
        cout<<"Student Parameterised constructor called"<<endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
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

    // setter
    void setGf( string gf ){
        if( gf.find("Sharma") != string::npos){
            this->gf = "Anuska Sharma";
        }else{
            this->gf = gf;
        }
    }

    // getter
    string getGf() const{
        return this->gf;
    }

    // destructor / dtor
    ~Student(){
        cout<<"Student destructor is called"<<endl;
        delete this->gpa;
    }

    private:
    void gfChatting(){
        cout<<this->name<<" is Chatting with GF "<<endl;
    }
};

int main(){

    Student A(1,21,"Virat",6,9.8,"Anuska");

    // A.gfChatting();
    // cout<<A.gf<<endl;

    cout<<A.getGf()<<endl;
    A.setGf("Sharma");
    cout<<A.getGf()<<endl;



    return 0;
}