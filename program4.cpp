#include <iostream>
using namespace std;

int main() {
    int dayNumber;

    // Input: Get the day number from the user
    cout << "Enter a number (1-7): ";
    cin >> dayNumber;

    // Determine the day based on the input
    switch (dayNumber) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}
