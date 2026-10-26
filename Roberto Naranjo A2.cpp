#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Student scores
    double studentOne;
    double studentTwo;
    double studentThree;
    double studentFour;
    double studentFive;
    double studentSix;
    double studentSeven;
    double studentEight;

    // Letter grades
    char letterGradeOne;
    char letterGradeTwo;
    char letterGradeThree;
    char letterGradeFour;
    char letterGradeFive;
    char letterGradeSix;
    char letterGradeSeven;
    char letterGradeEight;

    // Assign scores
   
    // Get student scores
    cout << "Please enter a score for student one: ";
    cin >> studentOne;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentOne < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentOne > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student two: ";
    cin >> studentTwo;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentTwo < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentTwo > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student three: ";
    cin >> studentThree;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentThree < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentThree > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student four: ";
    cin >> studentFour;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentFour < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentFour > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student five: ";
    cin >> studentFive;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentFive < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentFive > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student six: ";
    cin >> studentSix;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentSix < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentSix > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student seven: ";
    cin >> studentSeven;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentSeven < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentSeven > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

    cout << "Please enter a score for student eight: ";
    cin >> studentEight;

    if (cin.fail()) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentEight < 0) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }
    else if (studentEight > 150) {
        cout << "This is an invalid score. Please restart the program.";
        return 0;
    }

 // Calculate percentages
     double percentageOne = studentOne * 2 / 3;
     double percentageTwo = studentTwo * 2 / 3;
     double percentageThree = studentThree * 2 / 3;
     double percentageFour = studentFour * 2 / 3;
     double percentageFive = studentFive * 2 / 3;
     double percentageSix = studentSix * 2 / 3;
     double percentageSeven = studentSeven * 2 / 3;
     double percentageEight = studentEight * 2 / 3;

   
    // Assign letter grades
    if (percentageOne >= 90)
        letterGradeOne = 'A';
    else if (percentageOne >= 80)
        letterGradeOne = 'B';
    else if (percentageOne >= 70)
        letterGradeOne = 'C';
    else if (percentageOne >= 60)
        letterGradeOne = 'D';
    else
        letterGradeOne = 'F';

    if (percentageTwo >= 90)
        letterGradeTwo = 'A';
    else if (percentageTwo >= 80)
        letterGradeTwo = 'B';
    else if (percentageTwo >= 70)
        letterGradeTwo = 'C';
    else if (percentageTwo >= 60)
        letterGradeTwo = 'D';
    else
        letterGradeTwo = 'F';

    if (percentageThree >= 90)
        letterGradeThree = 'A';
    else if (percentageThree >= 80)
        letterGradeThree = 'B';
    else if (percentageThree >= 70)
        letterGradeThree = 'C';
    else if (percentageThree >= 60)
        letterGradeThree = 'D';
    else
        letterGradeThree = 'F';

    if (percentageFour >= 90)
        letterGradeFour = 'A';
    else if (percentageFour >= 80)
        letterGradeFour = 'B';
    else if (percentageFour >= 70)
        letterGradeFour = 'C';
    else if (percentageFour >= 60)
        letterGradeFour = 'D';
    else
        letterGradeFour = 'F';

    if (percentageFive >= 90)
        letterGradeFive = 'A';
    else if (percentageFive >= 80)
        letterGradeFive = 'B';
    else if (percentageFive >= 70)
        letterGradeFive = 'C';
    else if (percentageFive >= 60)
        letterGradeFive = 'D';
    else
        letterGradeFive = 'F';

    if (percentageSix >= 90)
        letterGradeSix = 'A';
    else if (percentageSix >= 80)
        letterGradeSix = 'B';
    else if (percentageSix >= 70)
        letterGradeSix = 'C';
    else if (percentageSix >= 60)
        letterGradeSix = 'D';
    else
        letterGradeSix = 'F';

    if (percentageSeven >= 90)
        letterGradeSeven = 'A';
    else if (percentageSeven >= 80)
        letterGradeSeven = 'B';
    else if (percentageSeven >= 70)
        letterGradeSeven = 'C';
    else if (percentageSeven >= 60)
        letterGradeSeven = 'D';
    else
        letterGradeSeven = 'F';

    if (percentageEight >= 90)
        letterGradeEight = 'A';
    else if (percentageEight >= 80)
        letterGradeEight = 'B';
    else if (percentageEight >= 70)
        letterGradeEight = 'C';
    else if (percentageEight >= 60)
        letterGradeEight = 'D';
    else
        letterGradeEight = 'F';


    // Calculate sum and average
    double sum;
    double average;

    sum = studentOne + studentTwo + studentThree + studentFour
        + studentFive + studentSix + studentSeven + studentEight;

    average = sum / 8;

   
    // Output
    cout << "Work submitted by Roberto Naranjo\n";
    cout << "*****************************************" << endl;

    cout << left;
    cout << fixed << setprecision(3);

    cout << setw(15) << "Student"
         << setw(12) << "Score"
         << setw(12) << "Percentage"
         << "Grade\n";

    cout << "*****************************************" << endl;

    cout << setw(15) << "studentOne"
         << setw(12) << studentOne
         << setw(12) << percentageOne
         << letterGradeOne << endl;

    cout << setw(15) << "studentTwo"
         << setw(12) << studentTwo
         << setw(12) << percentageTwo
         << letterGradeTwo << endl;

    cout << setw(15) << "studentThree"
         << setw(12) << studentThree
         << setw(12) << percentageThree
         << letterGradeThree << endl;

    cout << setw(15) << "studentFour"
         << setw(12) << studentFour
         << setw(12) << percentageFour
         << letterGradeFour << endl;

    cout << setw(15) << "studentFive"
         << setw(12) << studentFive
         << setw(12) << percentageFive
         << letterGradeFive << endl;

    cout << setw(15) << "studentSix"
         << setw(12) << studentSix
         << setw(12) << percentageSix
         << letterGradeSix << endl;

    cout << setw(15) << "studentSeven"
         << setw(12) << studentSeven
         << setw(12) << percentageSeven
         << letterGradeSeven << endl;

    cout << setw(15) << "studentEight"
         << setw(12) << studentEight
         << setw(12) << percentageEight
         << letterGradeEight << endl;

    cout << "*****************************************" << endl;

    cout << "Sum score of all students is " << sum << endl;
    cout << "Average score of all students is " << average << endl;


    return 0;
}