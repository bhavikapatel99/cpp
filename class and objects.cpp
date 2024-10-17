#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
private:
    int scores[5]; // Assuming there are 5 exam scores for each student.

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i]; // Read scores from stdin and save them
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i]; // Calculate the sum of scores
        }
        return total;
    }
};

int main() {
    int n;
    cin >> n; // Number of students
    Student students[n];
    
    // Input scores for each student
    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    int kristenTotalScore = students[0].calculateTotalScore(); // Kristen's scores are the first input
    int higherScorers = 0;

    // Compare scores with Kristen's
    for (int i = 1; i < n; i++) {
        if (students[i].calculateTotalScore() > kristenTotalScore) {
            higherScorers++;
        }
    }

    cout << higherScorers << endl; // Output the number of students who scored higher than Kristen

    return 0;
}
