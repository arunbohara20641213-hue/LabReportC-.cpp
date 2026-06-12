//Program 1 – Job Applicant Qualifier
#include <iostream>
using namespace std;

int main() {
    double weightLifted;
    int age, experience;

    cout << "Enter weight you can lift (kg): ";
    cin >> weightLifted;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter years of experience: ";
    cin >> experience;

    if ((weightLifted >= 50 && age >= 18 && age <= 24) ||
        (experience > 4 && weightLifted >= 35 && age > 24))
    {
        cout << "Applicant is QUALIFIED for the job." << endl;
    }
    else
    {
        cout << "Applicant is NOT QUALIFIED for the job." << endl;
    }

    return 0;
}
//Program 2 – Nth Fibonacci Number (Iterative)
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the position (n) to find the nth Fibonacci number: ";
//     cin >> n;

//     int a = 0, b = 1, c;

//     if (n == 0) {
//         cout << a;
//     }
//     else if (n == 1) {
//         cout << b;
//     }
//     else {
//         for (int i = 2; i <= n; i++) {
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         cout << "The " << n << "th Fibonacci number is: ";
//         cout << b;
//     }

//     return 0;
// }

//Program 3 – OOP Grade Calculator
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cout << "Enter OOP marks: ";
//     cin >> marks;

//     if (marks < 0 || marks > 100) {
//         cout << "Invalid marks!";
//         return 0;
//     }

//     switch (marks / 10) {
//         case 10:
//         case 9:
//             cout << "Grade: A";
//             break;
//         case 8:
//             cout << "Grade: B";
//             break;
//         case 7:
//             cout << "Grade: C";
//             break;
//         case 6:
//             cout << "Grade: D";
//             break;
//         default:
//             cout << "Grade: F";
//     }

//     return 0;
// }