//A parameterized constructor is a constructor that takes arguments when an object is created.
//This allows you to pass values at the time of object creation to initialize the object's data members.
//In contrast to the default constructor (which doesn't take any arguments)
//a parameterized constructor allows you to provide initial values for an object's attributes at the time of creation.
#include<iostream>
using namespace std;
class program
//class with name program
{
    public:program(string name,string mobileno)//class constructor
    {
        cout <<"Name is "<<name;
        cout <<"\nMobile number is "<< mobileno;

    }
};
int main(){
    string nm;
    string mob;
    cout<<"enter the Name and Mobile number : ";
    cin>>nm>>mob;
    program obj(nm,mob);//class object 
    return 0;
}
