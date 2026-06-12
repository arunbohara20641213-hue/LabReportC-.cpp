//create a fuction that calculates the product of 3 numbers enetered by the user, regardless of the number enetered being integer or floating point Print the result as output.
//Using Function Overloading - int version and float version
#include <iostream>
using namespace std;

// Function overloading - Integer version
int calculateProduct(int a, int b, int c) {
    return a * b * c;
}

// Function overloading - Float/Double version
double calculateProduct(double a, double b, double c) {
    return a * b * c;
}

// Function overloading - Float version
float calculateProduct(float a, float b, float c) {
    return a * b * c;
}

int main() {
    int choice;
    
    cout << "Choose input type:" << endl;
    cout << "1. Integer numbers" << endl;
    cout << "2. Floating point numbers (double)" << endl;
    cout << "3. Floating point numbers (float)" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    
    if (choice == 1) {
        int num1, num2, num3;
        cout << "Enter three integer numbers: ";
        cin >> num1 >> num2 >> num3;
        
        int product = calculateProduct(num1, num2, num3);
        cout << "The product of the three integers is: " << product << endl;
    }
    else if (choice == 2) {
        double num1, num2, num3;
        cout << "Enter three floating point numbers (double): ";
        cin >> num1 >> num2 >> num3;
        
        double product = calculateProduct(num1, num2, num3);
        cout << "The product of the three numbers is: " << product << endl;
    }
    else if (choice == 3) {
        float num1, num2, num3;
        cout << "Enter three floating point numbers (float): ";
        cin >> num1 >> num2 >> num3;
        
        float product = calculateProduct(num1, num2, num3);
        cout << "The product of the three numbers is: " << product << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}