// write a program to store 10 roll numbers of weak learners and 10 of fast learners of your class according to u
//store roll numbers in 2 different array and display the record 
#include<iostream>
using namespace std;

class Learners {
private:
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array for weak learners
    int b[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; // Array for advanced learners

public:
    void display() {
        cout << "\nenter List of weak learners are: ";
        int i = 0; i < 10; i++;
        cin >> a[i];
        cout << "\nList of weak learners are: ";
        for(int i = 0; i < 10; i++) {
            cout << a[i] << " ";
        }

        cout << "\nenter List of fast learners are: ";
        int i = 0; i < 10; i++;
        cin >> b[i];
        cout << "\nList of fast  learners are: ";
        for(int i = 0; i < 10; i++) {
            cout << b[i] << " ";
        }

    }
};
int main() {
    Learners obj; 
    obj.display();  
    return 0;
}
