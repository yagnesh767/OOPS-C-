#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Choose conversion:" << endl
         << "1. Celsius to Fahrenheit" << endl
         << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case '1':
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit" << endl;
            break;
        case '2':
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
