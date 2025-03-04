//write a program create a class with name student_management_system
//store student data fromm roll number 1 tp 10
//data includes(name,roll number,percentage)
//display all data in reverse order using array of object.
#include<iostream>
using namespace std;

class Student_Management_System {
private:
    string name;
    int rollNumber;
    float percentage;

public:
    // Function to input student data
    void inputData(int r) {
        rollNumber = r;
        cout << "Enter name of student with Roll Number " << rollNumber << ": ";
        cin >> name;
        cout << "Enter percentage of student with Roll Number " << rollNumber << ": ";
        cin >> percentage;
    }

    // Function to display student data
    void displayData() {
        cout << "\nRoll Number: " << rollNumber << "\t";
        cout << "Name: " << name << "\t";
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student_Management_System students[10];  // Array of objects to store 10 students

    // Input student data for roll numbers 1 to 10
    for(int i = 0; i < 10; i++) {
        students[i].inputData(i + 1);
    }

    // Display student data in reverse order
    cout << "\nStudent Data in Reverse Order:\n";
    for(int i = 9; i >= 0; i--) {
        students[i].displayData();
    }

    return 0;
}
