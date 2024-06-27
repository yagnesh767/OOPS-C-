#include <iostream>

int main() {
    float floatValue = 3.14;
    float *ptrFloat = &floatValue; 
    std::cout << "Value of float variable: " << *ptrFloat << std::endl;

    return 0;
}
