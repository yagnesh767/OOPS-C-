#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Number of elements in the string: " << input.length() << endl;

    return 0;
}
