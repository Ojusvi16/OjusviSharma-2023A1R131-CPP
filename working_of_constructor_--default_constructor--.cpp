//program to demonstrate working of constructor 
//Constructor program(): This is the constructor of the program class.  A constructor is a special function that gets automatically called when an object of the class is created. Its main purpose is to initialize the object's data members.
//default program for constructor
//default constructor 
#include<iostream>
using namespace std;
class program
//class with name program
{
    public:program()//class constructor
    {
        cout <<"constructor called";
    }
};
int main(){
    program obj;//class object 
    return 0;
}
