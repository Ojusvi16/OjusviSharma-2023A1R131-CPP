#include<iostream>
using namespace std;

// Class to handle sum operation
class Sum {
public:
    int num1, num2;

    // Function to calculate the sum
    int calculateSum() {
        return num1 + num2;
    }
};

int main() {
    Sum sumObject;

    // Prompt user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> sumObject.num1 >> sumObject.num2;

    // Call the calculateSum function to get the result
    int result = sumObject.calculateSum();

    // Output the result
    cout << "The sum of " << sumObject.num1 << " and " << sumObject.num2 << " is: " << result << endl;

    return 0;
}
