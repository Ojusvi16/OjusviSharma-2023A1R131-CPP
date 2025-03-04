#include <iostream>
#include <string>

using namespace std;

// Class to handle login details
class LoginDetails {
private:
    int password;

public:
    int Validate() {
        cout << "Enter your Login password: ";
        cin >> password;

        if (password == 1234) {  // Corrected the condition to use '==' for comparison
            cout << "Password is Validated" << endl;
            Display();
            return 1;
        } else {
            cout << "\nPassword is Invalid" << endl;
            return 0;
        }
    }

    void Display() {
        cout << "\nWelcome to MyApp!" << endl;
    }
};

// Class to handle user profile details
class UserProfile {
private:
    string username, emailID, name;

public:
    void Accept() {
        cout << "\nEnter your username: ";
        cin >> username;
        cout << "Enter email id: ";
        cin >> emailID;
        cout << "Enter name: ";
        cin >> name;
    }

    void Display() {
        cout << "\nThe username is: " << username << endl;
        cout << "The email id is: " << emailID << endl;
        cout << "The name is: " << name << endl;
    }
};

int main() {
    int n;

    // Create an object for LoginDetails and validate login
    LoginDetails obj1;
    n = obj1.Validate();

    if (n == 1) {
        // Create an object for UserProfile and accept/display user details
        UserProfile obj2;
        obj2.Accept();
        obj2.Display();
    }

    return 0;
}
