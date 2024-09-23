//Grading System
#include <iostream>
using namespace std;

int main() {
    //Declaring variables to store marks and average
    int physics, biology, maths, average;
    
    //Prompting the user to enter marks for each subject
    cout << "Enter marks for Physics: ";
    cin >> physics;
    
    cout << "Enter marks for biology: ";
    cin >> biology;
    
    cout << "Enter marks for Maths: ";
    cin >> maths;
    
    //Calculating the average
    average = (physics + biology + maths) / 3;
    
    //Using switch statement to determine the average grade
    switch (average) {
        case 70 ... 100:
            cout << "Grade: A";
            break;
        case 60 ... 69:
            cout << "Grade: B";
            break;
        case 50 ... 59:
            cout << "Grade: C";
            break;
        case 40 ... 49:
            cout << "Grade: D";
            break;
        case 0 ... 39:
            cout << "FAIL";
            break;
        default:
            cout << "Enter valid marks!";
    }
    
    //Telling the OS that the program was successfully executed
    return 0;
}