#include <iostream>
using namespace std;

int main()
{
    int mainChoice, subChoice;

    // Main menu
    cout << "Welcome to the Food Paradise!" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. Non-Vegetarian" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> mainChoice;

    switch (mainChoice)
    {
    case 1:
        // Vegetarian sub-menu
        cout << "\nVegetarian Menu:" << endl;
        cout << "1. Veg Biryani" << endl;
        cout << "2. Paneer Tikka" << endl;
        cout << "3. Masala Dosa" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Enjoy your Veg Biryani!" << endl;
            break;
        case 2:
            cout << "Paneer Tikka is on its way!" << endl;
            break;
        case 3:
            cout << "Masala Dosa—crispy and delicious!" << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3." << endl;
        }
        break;

    case 2:
        // Non-vegetarian sub-menu
        cout << "\nNon-Vegetarian Menu:" << endl;
        cout << "1. Chicken Biryani" << endl;
        cout << "2. Fish Curry" << endl;
        cout << "3. Mutton Korma" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            cout << "Dig into the Chicken Biryani!" << endl;
            break;
        case 2:
            cout << "Fish Curry—it's a catch!" << endl;
            break;
        case 3:
            cout << "Mutton Korma—rich and flavorful!" << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, or 3." << endl;
        }
        break;

    default:
        cout << "Invalid main menu choice. Please select 1 or 2." << endl;
    }

    return 0;
}
