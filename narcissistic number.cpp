#include <iostream>
#include <cmath>

bool isNarcissistic(int num) {
    int sum = 0;
    int temp = num;
    int numDigits = 0;

    // Calculate the number of digits
    while (temp > 0) {
        temp /= 10;
        ++numDigits;
    }

    temp = num;

    // Calculate the sum of the digits each raised to the power of numDigits
    while (temp > 0) {
        int digit = temp % 10;
        sum += std::pow(digit, numDigits);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isNarcissistic(num)) {
        std::cout << num << " is a narcissistic number." << std::endl;
    } else {
        std::cout << num << " is not a narcissistic number." << std::endl;
    }

    return 0;
}
