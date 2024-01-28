#include<iostream>
using namespace std;

int main(){

    // declare
    string name;
    cout<<"name: "<<name<<endl;

    name="amit";
    cout<<"name: "<<name<<endl;

    name.push_back('z');
    cout<<"name: "<<name<<endl;

    // length 
    int length = name.size();
    int length2 = name.length();
    cout<<"length: "<<length<<"   "<<length2<<endl;

    string a = "amit";
    string b = " meher";

    // append
    a.append(b);
    cout<<"a = "<<a<<endl;

    // insert 
    // string.insert(position,string);
    b.insert(1,"amit - ");
    cout<<"b = "<<b<<endl;

    // substring
    // string.substr(position.length);
    string sub = b.substr(1,4);
    cout<<"sub = "<<sub<<endl;
    sub = b.substr(1);
    cout<<"sub = "<<sub<<endl;

    // compare
    // string.compare(string)
    if( a.compare(b) == 0){
        cout<<"string a and string b are equal"<<endl;
    }else{
        cout<<"string a and string b are not equal"<<endl;
    }

    // find
    a = "My name is amit";
    b = "amit";

    int ans = a.find(b);

    if( ans == string::npos ){
        cout<<"substring not found"<<endl;
    }
    else{
        cout<<"substring found at index "<<ans<<endl;
    }
    

    return 0;
}