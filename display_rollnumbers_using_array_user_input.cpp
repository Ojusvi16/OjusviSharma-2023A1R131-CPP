#include<iostream>
using namespace std;

class Learners {
private:
    int weakLearners[10];   // Array for weak learners
    int advancedLearners[10]; // Array for advanced learners

public:
    void input() {
        // Taking user input for weak learners
        cout << "Enter roll numbers for weak learners (10 roll numbers):\n";
        for(int i = 0; i < 10; i++) {
            cout << "Enter roll number for weak learner " << (i+1) << ": ";
            cin >> weakLearners[i];
        }

        // Taking user input for advanced learners
        cout << "\nEnter roll numbers for advanced learners (10 roll numbers):\n";
        for(int i = 0; i < 10; i++) {
            cout << "Enter roll number for advanced learner " << (i+1) << ": ";
            cin >> advancedLearners[i];
        }
    }

    void display() {
        // Displaying weak learners
        cout << "\nList of weak learners are: ";
        for(int i = 0; i < 10; i++) {
            cout << weakLearners[i] << " ";
        }

        // Displaying advanced learners
        cout << "\nList of advanced learners are: ";
        for(int i = 0; i < 10; i++) {
            cout << advancedLearners[i] << " ";
        }
    }
};

int main() {
    Learners obj;  // Creating object of the class
    obj.input();   // Taking user input for weak and advanced learners
    obj.display(); // Displaying the roll numbers
    return 0;
}
