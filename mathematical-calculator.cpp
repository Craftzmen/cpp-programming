#include <iostream>
#include <cstdlib>

using namespace std;

void add(int num1, int num2) {
    cout<<"Addition of two numbers: "<<num1+ num2<<endl;
}

void sub(int num1, int num2) {
    cout<<"Subtraction of two numbers: "<<num1 - num2<<endl;
}

void product(int num1, int num2) {
    cout<<"Multiplication of two numbers: "<<num1 * num2<<endl;
}

void divide(int num1, int num2) {
    if (num2 != 0) {
        cout<<"Division of two numbers: "<<num1 / num2<<endl;
    } else {
        cout<<"Error: Division by zero"<<endl;
    }
}

int main() {

    int choice;
    int num1, num2;

    while(true) {
        cout<<"Mathematical calculator:"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        if (choice == 5) {
            cout<<"Good Bye!"<<endl;
            exit(0);
        }

        cout<<"Enter two numbers: ";
        cin>>num1>>num2;

        switch(choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                sub(num1, num2);
                break;
            case 3:
                product(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default: cout<<"Wrong choice"<<endl;
        }
    }

    return 0;
}