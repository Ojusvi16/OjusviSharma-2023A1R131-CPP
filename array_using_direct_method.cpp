//program to demonstrate array declaration and array initialization using direct method
#include<iostream>
using namespace std;

class ArrayProgram {
private:
    int a[5];  // Array declaration

public:
    void display() {
        // Initialization of array elements using direct method
        a[0] = 10; 
        a[1] = 5;
        // Display array elements
        cout << "\nArray element at index 0 is: " << a[0];
        cout << "\nArray element at index 1 is: " << a[1];
        //a[2] will take garbage value as value not assigned 
        cout << "\nArray element at index 2 is: " << a[2];
    }
};

int main() {
    ArrayProgram obj;  // Creating object of class
    obj.display();     // Calling display function
}
