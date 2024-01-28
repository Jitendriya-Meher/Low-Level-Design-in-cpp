#include<iostream>
using namespace std;

class Student{
    public:
        // properties
        int age,weight,height;
        string name;

        // default constructor
        Student(){
            cout<<" Student default constructor called"<<endl;
            age = weight = height = 0;
        }

        // parameterised constructor
        Student(int myage,int myweight, int myheight, string myname){
            cout<<" Student parametrised constructor called"<<endl;
            age = myage;
            weight = myweight;
            height = myheight;
            name = myname;
        }

        void data(){
            cout<<" name: "<<name<<endl;
            cout<<" age: "<<age<<endl;
            cout<<" height: "<<height<<endl;
            cout<<" weight: "<<weight<<endl<< endl;
        }

        // behaviours
        void running(){
            cout<<" i am running"<<endl;
        }

        void studying(){
            cout<<name<<" is studying"<<endl;
        }

        ~Student(){
            cout<<" i am inside destructor : "<<name<<endl;
        }
};

int main(){

    cout<<" class size: "<<sizeof(Student)<<endl;

    // object creation

    // static 
    Student s1;
    s1.age = 50;
    s1.name = "jiten 1";
    s1.running();
    s1.studying();
    s1.data();

    // dynamically
    Student *s2 = new Student();
    (*s2).name = "Jitendriya 2";
    s2->running();
    s2->studying();
    s2->data();

    Student s3(21,83,180,"jiten 3");
    s3.data();

    Student *s4 = new Student(20,83,179,"amit 4");
    s4->data();

    delete s2;
    delete s4;

    return 0;
}