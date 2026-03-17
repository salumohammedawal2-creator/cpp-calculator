#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;
    int choice; 


    while (true) {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter a number: ";
        cin >> num2;
        
        cout << "1. Add" << '\n';
        cout << "2. Subtract" << '\n';
        cout << "3. Multiply" <<  '\n';
        cout << "4. Divide" << '\n';
        cout << "5. Exit" << '\n';
        cout << "Make a choice" << '\n'; 
        cin >> choice;
        if (choice == 1) {
            cout << "Result = " << (num1 + num2) << '\n';
        } else if (choice == 2) {
            cout << "Result = " << (num1 - num2) << '\n';
        } else if (choice == 3) {
            cout << "Result = " << (num1 * num2) << '\n';
        } else if (choice == 4) {
            if (num2 == 0) {
                cout << "CANNOT DIVIDE BY ZERO" << '\n';
            } else cout << "Result = " << (num1 / num2) << '\n';
        } else if (choice == 5) {
            cout << "Goodbye" << '\n';
            break;
        } else cout << "INVALID CHOICE" << '\n';
         


    }

    return 0;
}