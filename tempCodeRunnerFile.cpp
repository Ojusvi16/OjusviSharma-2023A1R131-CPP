#include<iostream>
using namespace std;

class Student {
public:
    void welcomeMessage() {
        cout << "Welcome to MIET!" << endl;
    }

    bool validateRegistrationNumber(int regNumber) {
        if (regNumber >= 60 && regNumber <= 120) {
            cout << "Login successful!" << endl;
            return true;
        } else {
            cout << "Registration number is invalid. Login failed!" << endl;
            return false;
        }
    }
};

int main() {
    Student student;

    student.welcomeMessage(); // Display the welcome message

    int regNumber;
    cout << "Enter your registration number: ";
    cin >> regNumber;

    // Validate the registration number
    student.validateRegistrationNumber(regNumber);

    return 0;
}