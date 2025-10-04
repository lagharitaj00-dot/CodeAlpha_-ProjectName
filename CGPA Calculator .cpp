//Task 1: CGPA Calculator 

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    int n;  
    cout << "Enter number of courses: ";
    cin >> n;

    double gradePoints[50];   // Store grade points (A=4, B=3, etc.)
    double creditHours[50];   // Store credit hours
    double totalCredits = 0, totalGradePoints = 0;

    cout << "\nEnter grade points and credit hours for each course:\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1 << ":\n";
        cout << "  Grade Points (A=4, B=3, C=2, D=1, F=0): ";
        cin >> gradePoints[i];
        cout << "  Credit Hours: ";
        cin >> creditHours[i];

        totalCredits += creditHours[i];
        totalGradePoints += gradePoints[i] * creditHours[i];
    }

    double GPA = totalGradePoints / totalCredits;  // semester GPA
    double CGPA = GPA; // Simple version ? GPA = CGPA

    cout << fixed << setprecision(2);  // show result with 2 decimal places
    cout << "\n----- RESULT -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Course " << i + 1 
             << " -> Grade Points: " << gradePoints[i]
             << ", Credit Hours: " << creditHours[i] << endl;
    }
    cout << "Semester GPA = " << GPA << endl;
    cout << "Overall CGPA = " << CGPA << endl;

    return 0;
}










