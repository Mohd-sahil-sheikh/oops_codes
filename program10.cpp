#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input: Get a single character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase (if it's an uppercase letter)
    ch = tolower(ch);

    // Check if the character is a vowel or a consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "It's a vowel!" << endl;
            break;
        default:
            cout << "It's a consonant!" << endl;
    }

    return 0;
}
