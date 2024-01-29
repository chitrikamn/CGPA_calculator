#include <iostream>
using namespace std;

float calculateCGPA(int n, int credits[], float grades[]) {
    float totalGradePoints = 0;
    int totalCredits = 0;
    
    for (int i = 0; i < n; i++) {
        totalGradePoints += credits[i] * grades[i];
        totalCredits += credits[i];
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int n;
    cout << "Enter the number of courses: ";
    cin >> n;

    int credits[n];
    float grades[n];

    
    for (int i = 0; i < n; i++) {
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits[i];
        cout << "Enter grade for course " << i + 1 << ": ";
        cin >> grades[i];
    }

    
    float cgpa = calculateCGPA(n, credits, grades);
    cout << "Your Cumulative Grade Point Average (CGPA) is: " << cgpa << endl;

    return 0;
}
