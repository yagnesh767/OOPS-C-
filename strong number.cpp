#include <iostream>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int num) {
    int sum = 0;
    int temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isStrong(num)) {
        std::cout << num << " is a strong number." << std::endl;
    } else {
        std::cout << num << " is not a strong number." << std::endl;
    }

    return 0;
}
