#include<iostream>
using namespace std;

class student_personal_details {
public:
    string student_name;
    int rollnumber;
    string section;
    string department;

    void input() {
        cout << "Enter student name: ";
        cin >> student_name;

        cout << "Enter student roll number: ";
        cin >> rollnumber;

        cout << "Enter student section: ";
        cin >> section;

        cout << "Enter student department: ";
        cin >> department;
    }
};

class student_marks : public student_personal_details {
public:
    int sub1;
    int sub2;
    int sub3;
    int total_marks;
    int percentage;

    void input() {
        student_personal_details::input(); 

        cout << "Enter student marks for subject 1: ";
        cin >> sub1;

        cout << "Enter student marks for subject 2: ";
        cin >> sub2;

        cout << "Enter student marks for subject 3: ";
        cin >> sub3;

        total_marks = sub1 + sub2 + sub3;
        percentage = total_marks / 3; 
    }
};
class student_courses : public student_personal_details {
public:
    string course_taken; 
    int course_number;    
    int learning_hours_done;
    int learning_hours_needed;
    int learning_hours_left;

    void input() {
        student_personal_details::input();  

        cout << "Enter course name taken by student: ";
        cin >> course_taken; 

        cout << "Enter student course number: ";
        cin >> course_number; 

        cout << "Enter learning hours done by student: ";
        cin >> learning_hours_done;

        cout << "Enter total learning hours needed: ";
        cin >> learning_hours_needed;
        learning_hours_left = learning_hours_needed - learning_hours_done;
    }

    void display() {
        cout << "\nStudent name: " << student_name;
        cout << "\nStudent roll number: " << rollnumber;
        cout << "\nStudent section: " << section;
        cout << "\nStudent department: " << department;
        cout << "\nCourse taken: " << course_taken;  
        cout << "\nCourse number: " << course_number;  
        cout << "\nLearning hours done: " << learning_hours_done;
        cout << "\nLearning hours needed: " << learning_hours_needed;
        cout << "\nLearning hours left: " << learning_hours_left << endl;
    }
};

int main() {
    student_personal_details student; 
    student.input();    
    student_marks marks;  
    marks.input();          
    student_courses course;        
    course.input();                   
    course.display();                   

    return 0;
}
