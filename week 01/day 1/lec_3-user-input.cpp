#include<iostream>
using namespace std;

void cinIgnore(){

    int num;
    char ch;

    cout << "Enter an integer: ";
    cin >> num;

    // Ignore the newline character left in the input buffer
    cin.ignore();
    
    cout << "Enter a character: ";
    // cin.get(ch);
    cin>>ch;

    cout << "You entered: " << num << " and " << ch << endl;

    cin.ignore();
}

void cinGetline(){
    string input;

    cout << "Enter up to 10 characters: ";
    getline(cin, input);
    // cin.readsome(&input[0], 10);

    cout << "You entered: " << input << endl;

}

int main(){

    float age;

    // taking input
    cout<<" Enter your age : ";
    cin>>age;

    cout<<" Your age is "<<age<<endl;

    cinIgnore();

    cinGetline();

    return 0;
}