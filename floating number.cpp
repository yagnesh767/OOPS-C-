#include <iostream>
#include <cmath>

int main() {
    double number;

    std::cout << "Enter a floating-point number: ";
    std::cin >> number;

    int roundedNumber;
    double fractionalPart = number - static_cast<int>(number);

    if (fractionalPart >= 0.5) {
        roundedNumber = static_cast<int>(std::ceil(number));
    } else {
        roundedNumber = static_cast<int>(std::floor(number));
    }

    std::cout << "Rounded number: " << roundedNumber << std::endl;

    return 0;
}
