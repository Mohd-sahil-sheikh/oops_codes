#include <iostream>
using namespace std;

int main() {
    int month, days;

    // Input: Get the month from the user
    cout << "Enter the month (1 for January, 2 for February, etc.): ";
    cin >> month;

    // Determine the number of days based on the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            int year;
            cout << "Enter the year: ";
            cin >> year;

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; // Leap year
            } else {
                days = 28; // Non-leap year
            }
            break;
        default:
            cout << "Invalid month. Please enter a valid month (1-12)." << endl;
            return 1; // Exit with an error code
    }

    // Output: Display the number of days
    cout << "Number of days in the selected month: " << days << endl;

    return 0;
}
