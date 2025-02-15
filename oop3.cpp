#include <iostream>
using namespace std;

int phone = -1;
int pin = -1;
int enteredPin;
int enteredPhone;

void userRegistration() {
    cout << "Registration going on......\n";
    cout << "Enter phone number: ";
    cin >> phone;
    cout << "Enter pin number: ";
    cin >> pin;
    cout << "Account creation successful\n";
}

bool userLogin() {
    cout << "....Login.....\n";
    bool isAuthenticated = false;

    do {
        cout << "ENTER YOUR PHONE NUMBER: ";
        cin >> enteredPhone;

        cout << "ENTER YOUR PIN: ";
        cin >> enteredPin;


        if ((enteredPin == pin) && (enteredPhone == phone)) {
            isAuthenticated = true;
            cout << "PHONE NUMBER AND PIN ACCEPTED\n";

        } else {
            cout << "INCORRECT. Please try again\n";
        }
    } while (!isAuthenticated);

}
void mainMenu() {
    int choice;
    while (true) {
        cout << "\nMain Menu:\n";
        cout << "1. Send Money\n";
        cout << "2. Recharge\n";
        cout << "3. Pay Bill\n";
        cout << "4. Check Balance\n";
        cout << "5. Logout\n";
        cout << "Enter option: ";
        cin >> choice;


        switch (choice) {
            case 1:
                cout << "Send Money feature coming soon...\n";
                break;
            case 2:
                cout << "Recharge feature coming soon...\n";
                break;
            case 3:
                cout << "Pay Bill feature coming soon...\n";
                break;
            case 4:
                cout << "Check Balance feature coming soon...\n";
                break;
            case 5:
                cout << "Logging out...\n";
                return;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}


void InitMenu() {
    int InitMenu_op = 0;

    while (true) {
        cout << "1. User Registration\n";
        cout << "2. User Login\n";
        cout << "3. Exit\n";
        cout << "Enter option: ";
        cin >> InitMenu_op;

        switch (InitMenu_op) {
            case 1:
                userRegistration();
                break;
            case 2:
               if (userLogin()){
                mainMenu();
               }
                break;
            case 3:
                cout<<"Exiting......\n";
                return;
            default:
                cout << "Invalid Input\n";
                break;
        }
    }
}

int main() {
    InitMenu();
    return 0;
}
