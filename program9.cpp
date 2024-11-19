#include <iostream>

bool is_prime(int number) {
    if (number <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to the square root of the number
    for (int divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            return false;  // The number is divisible, so it's not prime
        }
    }

    return true;  // If no divisors found, the number is prime
}

int main() {
    try {
        int user_input;
        std::cout << "Enter an integer: ";
        std::cin >> user_input;

        if (is_prime(user_input)) {
            std::cout << "Prime Number" << std::endl;
        } else {
            std::cout << "Not a Prime number" << std::endl;
        }
    } catch (...) {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
    }

    return 0;
}
