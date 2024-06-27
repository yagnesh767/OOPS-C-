#include <iostream>

int main() {
    char charValue = 'A';
    char *ptrChar = &charValue;
    std::cout << "Value of char variable: " << *ptrChar << std::endl;

    return 0;
}
