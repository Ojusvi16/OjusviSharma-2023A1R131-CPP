#include<iostream>
using namespace std;

class ArrayProgram {
private:
    int a[5];  // Array declaration
    int b[5] = {1, 2, 3, 4, 5}; // Direct initialization of multiple array elements

public:
    void display() {
        // Initialization of array elements using direct method
        a[0] = 10;
        a[1] = 5;
        
        // Display array elements after initializing
        cout << "\nArray element at index 0 is: " << a[0];
        cout << "\nArray element at index 1 is: " << a[1];

        // Prompting the user to input the value for a[2]
        cout << "\nEnter Array element at index 2: ";
        cin >> a[2];

        cout << "\nArray element at index 2 entered by user is: " << a[2];

        // Display the element from array b
        cout << "\nArray element of array b at index 0 is: " << b[0];
    }
};

int main() {
    ArrayProgram obj;  // Creating object of the class
    obj.display();     // Calling display function
    return 0;
}
