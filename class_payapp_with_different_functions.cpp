//write a program to create a class with name PayAppwith different functions 
//accept()-function will accept amount from user 
//validate()-function will check amount(>0)
//discount()-function will calculate 10% discount on amount
//display()-function will display final bill on screen
#include<iostream>
using namespace std;

class PayApp {
    private:
        float amount, discount, final;

    public:void accept() {
            cout << "Enter the amount: ";
            cin >> amount;
        }

        void validate() {
            if (amount > 0) {
                cout << "Valid amount\n";
                applyDiscount();  // Call the discount method if the amount is valid
                display();         // Call the display method to show the final bill
            } else {
                cout << "Enter a valid amount\n";
            }
        }

        void applyDiscount() {
            discount = 0.10 * amount; // Calculate 10% discount
            cout << "10% discount on your entered amount is: " << discount << endl;
        }

        void display() {
            final = amount - discount; // Calculate the final bill after discount
            cout << "Final bill after 10% discount: " << final << endl;
        }
};

int main() {
    PayApp obj;
    obj.accept();   // Accept the amount from the user
    obj.validate(); // Validate the amount and apply the discount if valid
    return 0;
}
