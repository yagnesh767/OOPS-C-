#include <iostream>

bool isAbundant(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum > num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isAbundant(num)) {
        std::cout << num << " is an abundant number." << std::endl;
    } else {
        std::cout << num << " is not an abundant number." << std::endl;
    }

    return 0;
}
