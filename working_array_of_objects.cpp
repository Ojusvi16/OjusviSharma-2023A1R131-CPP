//program to demonstrate working of array of object(method1)
#include<iostream>
using namespace std;

class Program {//class declaration
private:
    int Regnumber;
    float marks;//private menmbers of class

public:
    Program(int R, float M) {//paramenterized constructor of class
        Regnumber = R;
        marks = M;
    }

    void display() {//function of class
        cout << "\nRegnumber = " << Regnumber << "\t" << "Marks = " << marks;
    }
};

int main(){
    Program obj[3]={{101,450},{102,430},{103,440}};//array of obkject with manual init 
    int i;
    for(i=0;i<3;i++)
    obj[i].display(); //calling of display function with array of object 
    return 0;
}

