//create a employee management system,create class with name employee with attributes like EmpID,EmpName,address
//use default constructor that initialize default values,
//use paramenterizeds constructor to initialize employee details 
//member function imputdetail() to accept input from user 
//memeber function display() to display details entered by the user
//destructor to display message all data erased 
#include<iostream>
using namespace std;

class Employee {
private:
    string Employee_name;
    int Employee_id;
    string Employee_address;
    public:
    // Function to input employee data
    void inputData(int i) {
        Employee_id = i;
        cout << "Enter employee name " << Employee_name << ": ";
        cin>>Employee_name;
        cout << "Enter employee id  " << Employee_id << ": ";        
        cin>>Employee_id;
        cout << "Enter employee naddress " << Employee_address << ": ";
        cin>>Employee_address;

    }
     // Function to display employee data
     void displayData() {
        cout << "\nEmployee_id " << Employee_id << "\t";
        cout << "Name: " << Employee_name << "\t";
        cout << "address: " << Employee_address << "\t" << endl;
    }
};
int main() {
    Employee employess[10];  // Array of objects to store 10 employees employees
    for(int i = 0; i < 10; i++) {
        employess[i].inputData(i + 1);
    }
    return 0;
}
